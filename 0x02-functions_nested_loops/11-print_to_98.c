#include "main.h"
#include<stdio.h>
/**
 * print_to_98 - is the entry point of the program
 *
 * Description: counting from n to 98
 *
 * @n: this is the test character
 *
 * Return: no return value
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
