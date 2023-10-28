#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplication of two numbers
 * @argc: count
 * @argv: vector
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int n = 0, m = 0;

	if (argc == 3)
	{
		n = atoi(argv[1]);
		m = atoi(argv[2]);
		printf("%d\n", n * m);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
