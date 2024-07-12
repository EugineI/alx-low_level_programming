#include "main.h"
/**
 * _islower - is the entry point and name of the program.
 *
 * Description: the program checks for lower case
 *
 * @c: is the decision chracter
 *
 * Return: 1 for lowercase and 0 for upper case.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
