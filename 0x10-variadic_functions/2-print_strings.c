#include<stdio.h>
#include<stdarg.h>
#include<stdlib.h>
#include "variadic_functions.h"
/**
 * print_strings - function nam
 * @separator: separates strings
 * @n: number of ergs
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
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
	for (i = 0; i < n; i++)
	{
		char *str = va_arg(args, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (separator != NULL && separator[0] != '\0' && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
