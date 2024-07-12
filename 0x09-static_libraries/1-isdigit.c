#include "main.h"
/**
 * _isdigit - is the entry point
 *
 * @c: is the check character.
 *
 * Description: check digits
 *
 * Return: 1 for digit
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
