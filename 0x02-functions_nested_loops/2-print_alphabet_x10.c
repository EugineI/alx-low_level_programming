#include "main.h"
/**
 * print_alphabet_x10 - is the entry point
 *
 * Description: this function prints alphabets 10 times.
 *
 * Return: doesnt return a thing
 */
void print_alphabet_x10(void)
{
	char c;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
