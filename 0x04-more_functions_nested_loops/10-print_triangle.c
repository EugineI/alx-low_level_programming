#include "main.h"
/**
 * print_triangle - start point
 *
 * @size: check character
 *
 * Description: triangle shape
 *
 * Return: nothing
 */
void print_triangle(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size - i; j++)
			{
				_putchar(' ');
			}
			for (j = 1; j <= i; j++)
			{
				_putchar('#');

			}
			_putchar('\n');
		}
	}
}
