#include "main.h"
/**
 * _strlen - returns the length
 * @s: string
 * Retutn: length
 */
int _strlen(char *s)
{
	int l = 0;
while (*s != '\0')
{
l++;
s++;
}
return (l);
}
