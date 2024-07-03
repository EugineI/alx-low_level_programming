#include "main.h"
/**
 * _strncat - concatenates two strings
 *
 * @dest: destination
 *
 * @n: the size variable
 *
 * @src: source
 *
 * Return: pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *new = dest;
	int i;

	while (*new != '\0')
	{
		new++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		*new = src[i];
		new++;
	}
	*new = '\0';
	return (dest);

}
