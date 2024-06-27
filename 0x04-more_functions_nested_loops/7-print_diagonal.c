#include "main.h"
/**
 * print_diagonal - main function
 *
 * @n: is the check character
 *
 * Description: draw diagonal lines
 *
 * Return: nothing
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n >= 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	_putchar('\n');
}
