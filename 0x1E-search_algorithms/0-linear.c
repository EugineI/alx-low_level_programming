#include<stdio.h>
#include "search_algos.h"
/**
 * linear_search - linear search
 * @array: first element pointer
 * @size: number of elements
 * @value: number to search
 * Return: index of value
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n",
				(unsigned long)i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
