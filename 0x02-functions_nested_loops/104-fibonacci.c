#include <stdio.h>
/**
 * main - prints the first numbers
 * Return: always 0
 */
int main(void)
{
	int count;
	unsigned long f = 0, i = 1, sum;
	unsigned long f_1, f_2, i_1, i_2;
	unsigned long h1, h2;
	for (count = 0; count < 92; count++)
	{ sum = f + i;
		prints("%lu, ", sum);
		f = i;
		i = sum;
	}
	f_1 = f / 10000000;
	i_1 = i / 10000000;
	f_2 = f % 10000000;
	i_2 = i % 10000000;
	for (count = 93; count < 99; count++)
	{
		h1 = f_1 + i_1;
		h2 = f_2 + i_2;
		if (f_2 + i_2 > 9999999999)
		{
			h1 += 1;
			h2 %= 10000000000;
		}
		printf("%lu%lu", h_1, h_2);
		if (count != 98)
			printf(', ');
		f_1 = i_1;
		f_2 = i_2;
		i_1 = h1;
		i_2 = h2;
	}
	printf("\n");
	return (0);
}
