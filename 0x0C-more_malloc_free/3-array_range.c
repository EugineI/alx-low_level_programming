#include"main.h"
#include<stdlib.h>
#include<stdio.h>
/**
 * array_range - creates an array of integers
 *
 * @min: min
 *
 * @max: max
 *
 * Return: NULL or array
 */
int *array_range(int min, int max)
{
	int i;
	int len;
	int *str;

	if (min > max)
	{
		return (NULL);
	}
	len = max - min + 1;
	str = malloc(len * sizeof(int));
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		str[i] = min + i;
	}
	return (str);
}
