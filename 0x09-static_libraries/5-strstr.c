#include "main.h"
#include <stddef.h>
/**
 * _strstr - substring needle
 *
 * @haystack: string to look for
 *
 * @needle: the string to chech
 *
 * Return: beginning of substring
 */
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack != '\0')
	{
		char *hey =  haystack;
		char *need = needle;

		while (*hey == *need && *need != '\0')
		{
			hey++;
			need++;
		}
		if (*need == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
