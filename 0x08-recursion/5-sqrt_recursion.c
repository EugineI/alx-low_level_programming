#include "main.h"
/**
 * _sqrt_finder - squareroot of a number
 *
 * @i: test case
 *
 * @n: number
 *
 * Return: -1 or squareroot
 */
int _sqrt_finder(int n, int i)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1)
	{
		return (n);
	}
	if (i * i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	return (_sqrt_finder(n, i + 1));
}
/**
 * _sqrt_recursion - squareroot
 *
 * @n: number
 *
 * Return: -1 or number
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_finder(n, 0));
}
