#include<stdio.h>
#include"main.h"
/**
 * flip_bits - checks and counts diferent bits
 * @n: first bit string
 * @m: second bit string
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int dif = n ^ m;
	unsigned int count = 0;

	while (dif)
	{
		count += dif & 1;
		dif >>= 1;
	}
	return (count);
}
