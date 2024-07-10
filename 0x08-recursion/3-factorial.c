#include "main.h"
/**
 * factorial - factorial
 *
 * @n: number
 *
 * Return: -1 to indicate error
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
