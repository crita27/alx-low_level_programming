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
int abs_val;

abs_val = r * -1;
return (abs_val);
}
return (0);
}
