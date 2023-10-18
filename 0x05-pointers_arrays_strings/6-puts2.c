#include "main.h"
/**
 * puts2 - print one character
 * @str: input
 * return: 0
 */
void puts2(char *str)
{
int i = 0;
int t;
while (str[i] != '\0')
{
i++;
}
for (t = 0; t < i; t += 2)
{
putchar(str[t]);
}
putchar('\n');
}
