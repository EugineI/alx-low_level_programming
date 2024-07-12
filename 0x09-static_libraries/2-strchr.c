#include "main.h"
#include <stddef.h>
/**
 * _strchr - chech for first occurence of c
 *
 * @s: string
 *
 * @c: character
 *
 * Return: pointer to first occurence of c
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	if (c == '\0')
	{
		return (s + i);
	}
	return (NULL);
}
