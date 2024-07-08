#include "main.h"
/**
 * _memset - fills memory with constant byte
 *
 * @s: string
 *
 * @b: pointer
 *
 * @n: integer
 *
 * Return: -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-memcpy.c -o 1-memcpy
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
