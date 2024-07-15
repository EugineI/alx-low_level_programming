#include"main.h"
#include<stdlib.h>
#include<stdio.h>
/**
 * create_array - creates array of char
 *
 * @size: is the memory amount to be allocated
 *
 * @c: character to be initialised
 *
 * Return: NULL or pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = malloc(sizeof(char) * size);
	if (size == 0)
	{
		return (NULL);
	}
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
