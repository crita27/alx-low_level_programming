#include "main.h"

/**
 * _strlen_recursion - length of string
 * @s: input
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	while (*s != 0)
	{
		length++;
		s++;
	}
	return (length);
}
