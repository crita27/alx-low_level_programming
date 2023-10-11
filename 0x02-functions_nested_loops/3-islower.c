#include <stdio.h>
#include <ctype.h>
/**
 * _islower - identify lower case
 * @c: The character to be checked
 *
 * Return: 1 for lowercase or 0 for other value
 */
int _islower(int c)
{
if (islower(c))
	return (1);
else
	return (0);
}
