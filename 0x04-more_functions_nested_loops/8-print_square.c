#include "main.h"
/**
 * print_square - is the start point
 *
 * Description: squares
 *
 * @size: is the check character
 *
 * Return: nothing
 */
void print_square(int size)
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
			for (j = 1; j <= size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
