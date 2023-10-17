#include "main.h"
/**
 * print_rev - reverse
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
int longi = 0;
int i;

while (*s != '\0')
{
lingi++;
s++;
}
s--;
for (i = longi; i > 0; i--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}

