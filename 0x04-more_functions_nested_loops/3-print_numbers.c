#include "main.h"
/**
 * print_numbers - is a void function
 *
 * Description: prints numbers from 0 - 9.
 *
 * Return: nothing
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
