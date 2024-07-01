#include "main.h"
#include<stdio.h>
/**
 * print_array - prints array elements
 *
 * @a: pointer variable
 *
 * @n: array variable
 *
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
