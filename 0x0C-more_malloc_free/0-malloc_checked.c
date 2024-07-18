#include"main.h"
#include<stdlib.h>
#include<stdio.h>
/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: size
 *
 * Return: pointer to allocated address
 */
void *malloc_checked(unsigned int b)
{
	char *str = malloc(b);

	if (str == NULL)
	{
		exit(98);
	}
	return (str);
}
