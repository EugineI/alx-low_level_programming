#include "main.h"
/**
 * print_rev - prints string in reverse
 *
 * @s: string variable
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int c = 0;
	int i;

	while (s[c] != '\0')
	{
		c++;
	}
	for (i = c - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
