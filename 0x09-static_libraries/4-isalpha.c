#include "main.h"
/**
 * _isalpha - is the entry point and name of the program.
 *
 * Description: the program checks for uppercase
 *
 * @c: is the decision chracter
 *
 * Return: 0 for lowercase and 1 for upper case.
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
