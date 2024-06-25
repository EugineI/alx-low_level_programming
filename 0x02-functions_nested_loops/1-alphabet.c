#include "main.h"
/**
 * print_alphabet - prints alphabets
 *
 * Description: putchar for displaying alphabets
 *
 * Return: 0 to indicate success.
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
