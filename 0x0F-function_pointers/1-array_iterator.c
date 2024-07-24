#include"function_pointers.h"
#include<stddef.h>
/**
 * array_iterator - executes function given as parameter on each array element
 * @array: the given array
 * @size: size of the array
 * @action: pointer to the function we use.
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	while (i < size)
	{
		(*action)(array[i]);
		i++;
	}
}
