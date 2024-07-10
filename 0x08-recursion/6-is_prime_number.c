#include "main.h"
/**
 * is_prime_number - checks for prime numbers
 *
 * @n: the number to check
 *
 * Return: 0 or 1
 */
int prime_finder(int n, int i)
{
	if (n < 2)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	if (n % 2 == 0)
	{
		return (0);
	}
	if ((i * i > n) && (i < n))
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (prime_finder(n, i + 2));
}
/**
 *  prime_finder - finds prime number
 *
 *  @n: number
 *
 *  @i: test case
 *
 *  Return: 0 or 1;
 */
int is_prime_number(int n)
{
	return (prime_finder(n, 3));
}
