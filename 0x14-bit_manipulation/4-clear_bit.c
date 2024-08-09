#include"main.h"
#include<limits.h>
/**
 * clear_bit - sets bit to 0
 * @n: string bit
 * @index: the index to be cleared
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * CHAR_BIT)
	{
		return (-1);
	}
	mask = ~(1UL << index);
	*n &= mask;
	return (1);
}
