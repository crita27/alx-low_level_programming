#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string
 * @accept: bytes in string
 * Return: accept
 */
char *_strpbrk(char *s, char *accept)
{
	int i, m;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (m = 0; accept[m] != '\0'; m++)
		{
			if (s[i] == accept[m])
				return (s + i);
		}
	}
	return (NULL);
}
