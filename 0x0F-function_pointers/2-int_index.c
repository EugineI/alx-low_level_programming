#include"function_pointers.h"
/**
 * int_index - return index to first element not 0
 * @array: the array
 * @size: size of the array
 * @cmp: pointer to function
 * Return: -1 or 1 or index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}
	while (i < size)
	{
		if ((*cmp)(array[i]))
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
