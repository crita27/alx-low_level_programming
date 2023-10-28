#include "main.h"

/**
 * _strspn- entry
 * @s: input
 * @accept: input
 * Return: always 0 (success)
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int l = 0;
int a = 1, i;
while (*s != '\0' && a)
{
a = 0;
for (i = 0; accept[i] != '\0'; i++)
{
if (*s == accept[i])
{
a = 1;
break;
}
}
if (a)
{
l++;
s++;
}
}
return (l);
}
