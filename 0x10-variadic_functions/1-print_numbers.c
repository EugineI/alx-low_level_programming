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
		printf("\n");
		va_end(args);
		return;
	}
	else if (n == 1)
	{
		int num = va_arg(args, int);

		printf("%d\n", num);
		va_end(args);
		return;
	}
	for (i = 0; i < n; ++i)
	{
		int num = va_arg(args, int);

		printf("%d", num);
		if (separator != NULL && separator[0] != '\0' && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
