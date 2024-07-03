#include "main.h"
/**
 * _strcat - concatenates two strings
 *
 * @dest:  first string
 *
 * @src: second string
 *
 * Return: poiner to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	char *new = dest;

	while (*new != '\0')
	{
		new++;
	}
	while (*src != '\0')
	{
		*new = *src;
		new++;
		src++;
	}
	*new = '\0';
	return (dest);
}
