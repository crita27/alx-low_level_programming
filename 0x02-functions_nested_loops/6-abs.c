#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @r: the number to be computed
 * Return: absolute value of number
 */
int _abs(int r)
{
if(r < 0)
{
int n;
n = r * -1;
return (n);
}
else
return (r);
}
