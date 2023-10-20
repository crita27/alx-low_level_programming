#include "main.h"
/**
 * _strncat - concatenates two strings
 * @src: appends on dest
 * @n: number of bytes
 * @dest: appended upon
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0, d = 0;

while (dest[i++])
	d++;
for (i = 0; src[i] && i < n; i++)
	dest[d] = src[i];
return (dest);
}
