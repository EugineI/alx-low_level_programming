#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>
#include"variadic_functions.h"
/**
 * print_numbers - function name
 * @separator: separates numbers
 * @n: number of arguments
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	if (n == 0)
	{
		return;
	}
	else if (n == 1)
	{
		unsigned int num = va_arg(args, unsigned int);
		printf("%u\n", num);
		va_end(args);
	}
	for (i = 0; i < n; ++i)
	{
		unsigned int num = va_arg(args, unsigned int);

		printf("%u", num);
		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
