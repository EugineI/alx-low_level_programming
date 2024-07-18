#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include"main.h"
/**
 * _calloc - allocates memory to array.
 *
 * @nmemb: number of elements
 *
 * @size: number of bytes.
 *
 * Return: NULL or pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	str = malloc(nmemb * size);
	if (str == NULL)
	{
		return (NULL);
	}
	memset(str, 0, (nmemb * size));
	return (str);
}
