#include "main.h"
/**
 * print_last_digit - is the open function
 *
 * Description: printing the last digit
 *
 * @n: is the check character
 *
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int lastDigit;

	lastDigit = n % 10;

	if (lastDigit < 0)
	{
		lastDigit = -lastDigit;
	}
	_putchar(lastDigit + '0');
	return (lastDigit);
}
