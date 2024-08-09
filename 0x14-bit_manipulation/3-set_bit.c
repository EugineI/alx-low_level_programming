#include"main.h"
#include<limits.h>
#include<stdio.h>
/**
 * set_bit - sets value to 1
 * @n: string of bits
 * @index: index to be set
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * CHAR_BIT)
	{
		return (-1);
	}
	mask = 1UL << index;
	*n |= mask;
	return (1);
}
