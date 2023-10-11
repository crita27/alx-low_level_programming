#include <stdio.h>
#include <ctype.h>
/**
 * _islower(intc)- identify lower case
 *
 * Return: 1 (lowercase)
 * Return: 0 (other)
 */
int _islower(int c)
{
if (islower(c))
	return (1);
else
	return (0);
}
