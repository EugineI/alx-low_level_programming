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
 * Return: s
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
