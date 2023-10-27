#include "main.h"
#include <stdio.h>

int prime_recursion(int n, int i);
/** is_prime_number - if number is prime
 * @n: input
 * Return: 0
 */
int is_prime_number(int n)
{
	return (prime_recursion);
}
/**
 * prime_recursion - check if it is prime
 * @n: input
 * @i: times
 * Return: 0 for compostie or 1 for prime
 */
int prime_recursion(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);
	return (prime recursion(n, i + 1));
}
