#include <stdio.h>
/**
 * main - main function
 *
 * Return: 0 (Success)
 */
int main(void)
{
char m;
for (m = 'a' ; m <= 'z' ; m++)
	if (m != 'q' && m != 'e')
		putchar(m);
putchar('\n');
return (0);
}
