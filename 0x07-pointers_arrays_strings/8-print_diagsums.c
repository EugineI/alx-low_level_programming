#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - the sum of the diagnol
 *
 * @a: row
 *
 * @size: column
 *
 * Return: nothing.
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
		sum2 += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", sum1, sum2);
}
