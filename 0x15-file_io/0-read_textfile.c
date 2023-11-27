#include "main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * read_textfile- reads a text file and prints it to the POSIX stdout
 * @filename: text file
 * @letters: number of letters
 * Return: 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd;
	size_t m;
	size_t s;
	
	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	s = read(fd, buffer, letters);
	m = write (STDOUT_FILENO, buffer , s);

	free(buffer);
	close(fd);
	return (m);
}

