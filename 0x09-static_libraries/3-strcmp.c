#include "main.h"
/**
 * _strcmp - compares two strings
 *
 * @s1: string 1
 *
 * @s2: string 2
 *
 * Return: integer value
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
