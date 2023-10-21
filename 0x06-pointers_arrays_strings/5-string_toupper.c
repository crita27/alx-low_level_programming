#include "main.h"

/**
 * string_toupper - change lower to uppercase
 * @s: lowercase
 * Return: uppercase
 */
char *string_toupper(char *s)
{
char *p = s;
while (*p != '\0')
{
if (*p >= 'a' && *p <= 'z')
{
*p = *p - 32;
}
p++;
}
return (s);
}
