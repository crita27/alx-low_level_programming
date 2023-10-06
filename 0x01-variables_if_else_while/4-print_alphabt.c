#include <stdio.h>
/**
 * main - main function
 *
 * Return: 0 (Success)
 */
int main(void)
{
char m;
for (m = 'a' ; m < 'e' ; m++)
putchar(m);
for (m = 'f' ; m < 'q' ; m++)
putchar(m);
for (m = 'r' ; m <= 'z' ; m++) 
putchar(m);
putchar('\n');
return (0);
}
