#include "main.h"
#include <stdio.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of file
 * @text_content: text
 * Return: -1 but if it fails NULL
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i, m, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	i = open(filename, O_WRONLY | O_APPEND);
	m = write(i, text_content, len);

	if (i == -1 || m == -1)
		return (-1);
	close(i);
	return (1);
}
