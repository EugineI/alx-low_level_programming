#include "main.h"
/**
 * _abs - is the entry point of the program
 *
 * Description: the program prints the absolute value.
 *
 * @n: is the check character
 *
 * Return: n * -1 for neg and n for positive.
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
