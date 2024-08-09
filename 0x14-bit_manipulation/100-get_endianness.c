#include"main.h"
#include<stdio.h>
/**
 * get_endianness - checks endianness of the system
 * Return: 0 for big endian, 1 for little endian
 */
int get_endianness(void)
{
	unsigned int test = 1;
	char *byte = (char *)&test;

	if (*byte == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
