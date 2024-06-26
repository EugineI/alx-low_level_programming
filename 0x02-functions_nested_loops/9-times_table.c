#include "main.h"
/**
 * times_table - the entry point of the program
 *
 * Description: function creates the 9times table
 *
 * Return: returns no value
 */
void times_table(void)
{
	int i;
	int j;
	int product;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			product = i * j;
			if (product > 9)
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
			else if (product < 10 && j != 0)
			{
				_putchar(' ');
				_putchar((product) + '0');
			}
			else
			{
				_putchar((product) + '0');
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
