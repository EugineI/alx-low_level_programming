#include "main.h"
/**
 * times_table - the entry point of the program
 *
 * Description: function creates the 9times table
 *
 * Return: returns no value
 */
void print_times_table(int n)
{
	int i;
	int j;
	int times;

	if (n < 15 && n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				times = i * j;
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (times < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
				if (times <100)
				{
					_putchar(' ');
				}
				if (times >= 100)
				{
					_putchar((times / 100) + '0');
					_putchar(((times / 10) % 10) + '0');
					_putchar(((times % 100) % 10) + '0');
				}
				else if (times >= 10)
				{
					_putchar((times / 10) + '0');
					_putchar((times % 10) + '0');
				}
				else if (times < 10)
				{
					_putchar((times) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
