#include "main.h"
#include <stdio.h>

/**
 * _strchr - entry
 * @s: input
 * @c: input
 * Return: null
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return s;
		}
		s++;
	}
}
