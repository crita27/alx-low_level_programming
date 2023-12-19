#include <stdio.h>
#include "main.h"

/**
 * get_endianness - prog checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int i;
	char *m;

	i = 1;
	m = (char *)&i;
	return (*m);
}

