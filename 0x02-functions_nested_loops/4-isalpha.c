#include <stdio.h>
#include <ctype.h>
/**
 * _isalpha- check upper and lower case
 * Return: 1 if it is upper or lower or 0 if it is other
 * @c: the character which will be checked
 */
int _isalpha(int c)
{
if (isupper(c))
return (1);
else if (islower(c))
return (1);
else
return (0);
}
