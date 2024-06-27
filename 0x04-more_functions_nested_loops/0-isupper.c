#include "main.h"
/**
 * _isupper - is the entry point.
 *
 * Description: checks for upper case
 *
 * @c: the check character
 *
 * Return: 0 for lower 1 for upper
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
