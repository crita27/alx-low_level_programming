#include "main.h"
/**
 * puts2 - print one character
 * @str: input
 * return: 0
 */
void puts2(char *str)
{
int i = 0;
int t = 0;
int j;
while (*str != '\0')
{
str++;
i++;
}
t = i - 1;
for (j = 0; j <= t; j++)
{
if (j % 2 == 0)
{
putchar(str[j]);
}
}
putchar('\n');
}
