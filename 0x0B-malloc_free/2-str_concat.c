#include"main.h"
#include<stdlib.h>
/**
 * str_concat - concatnates two strings
 *
 * @s1: string1;
 *
 * @s2: string2;
 *
 * Return: final string.
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int len1 = 0;
	int len2 = 0;
	char *concat;

	while (s2[len2] != '\0')
	{
		len2++;
	}
	while (s1[len1] != '\0')
	{
		len1++;
	}
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	concat = malloc((len1 + len2 + 1) * sizeof(char));
	if (concat == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		concat[i] = s1[i];
	}
	for (i = 0; i < len2; i++)
	{
		concat[len1 + i] = s2[i];
	}
	concat[len1 + len2] = '\0';
	return (concat);
}
