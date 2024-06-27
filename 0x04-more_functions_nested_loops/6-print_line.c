#include "main.h"
/**
 * print_line - is the main function here
 *
 * Description: display a line
 *
 * @n: check character
 *
 * Return: nothing
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
