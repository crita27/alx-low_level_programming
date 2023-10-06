#include <stdio.h>
/**
 * main - main function
 *
 * Return: 0 (Success)
 */
int main(void)
{
char m;
char l;
for (l = 0 ; l < 10 ; l++)
	putchar(l + '0');
for (m = 'a' ; m <= 'f' ; m++)
putchar(m);
putchar('\n');
return (0);
}
