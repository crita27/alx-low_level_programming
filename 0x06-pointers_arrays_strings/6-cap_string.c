#include "main.h"

/**
 * cap_string - capitalize the first letter
 * @s: letter
 * Return: capitalized
 */
char *cap_string(char *s)
{
int c = 1;
int i;
for (i = 0; s[i] != '\0'; i++)
{
if (c && (s[i] >= 'a' && s[i] <= 'z'))
{
s[i] = s[i] - 32;
}
if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t' || s[i] == ',' || s[i] == '{' || s[i] == '}' || s[i] == '(' || s[i] == ')' || s[i] == '"' || s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?')
{
c = 1;
}
else
c = 0;
}
return (s);
}
