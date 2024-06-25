#include "main.h"
/**
 * print_sign - prints the number sign
 *
 * Description: the program types the sign of a number.
 *
 * @n: is the check character
 *
 * Return: 1 for positive 0 fof 0 and -1 for negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
