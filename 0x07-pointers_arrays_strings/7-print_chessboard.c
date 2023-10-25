#include "main.h"

/**
 * print_chessboard - entry
 * @a: array
 * Return: always 0
 */
void print_chessboard(char (*a)[8])
{
	int i, m;

	for (i = 0; i < 8; i++)
	{
		for (m = 0; m < 6; m++)
			_putchar(a[i][m]);
		_putchar('\n');
	}
}
