#include "main.h"
/**
 * print_number - prints integer
 *
 * Description: prints integers
 *
 * @n: is the character to print
 *
 * Return: nothing
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
	{
		print_number(n / 10);
	}
	_putchar((n % 10) + '0');
}
