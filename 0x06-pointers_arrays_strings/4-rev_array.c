#include "main.h"
/**
 * reverse_array - reverses the array
 *
 * @a: array
 *
 * @n: size of the array
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int new;
	int j = n - 1;

	while (i < j)
	{
		new = a[i];
		a[i] = a[j];
		a[j] = new;
		i++;
		j--;
	}
}
