#include "main.h"
/**
 * puts_half - prints half of the string
 *
 * @str: string character
 *
 * Return: nothing
 */
void puts_half(char *str)
{
	int i;
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	if ((length % 2) == 0)
	{
		for (i = length / 2; i < length; i++)
		{
			_putchar(str[i]);
		}
	}
	else
		for (i = (length + 1) / 2; i < length; i++)
		{
			_putchar(str[i]);
		}
	_putchar('\n');
}
