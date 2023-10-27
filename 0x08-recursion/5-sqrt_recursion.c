#include "main.h"
#include <stdio.h>

int _sqrt_recursion(int n)
{
int start = 1;
int end = n;
int result;
int mid = (start + end) / 2;
if (n < 0)
{
return (-1);
}
else if (n == 0 || n ==1)
{
return n;
}
while (start <= end)
{
if (mid * mid == n)
{
return mid;
}
else if (mid * mid < n)
{
start = mid + 1;
result = mid;
}
else
{
end = mid - 1;
}
}
return result;
}
