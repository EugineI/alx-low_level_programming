#include"main.h"
#include"stdio.h"
/**
 * get_bit - ges bits
 * @n: string
 * @index: index of bit
 * Return: value of the bit:
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned int) * 8)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
