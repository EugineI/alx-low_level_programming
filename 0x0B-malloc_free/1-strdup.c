#include"main.h"
#include<stdlib.h>
/**
 * _strdup - returns copy to a newly allocated space
 *
 * @str: string
 *
 * Return: pointer to new string
 */
char *_strdup(char *str)
{
	int i;
	char *dub;
	int len = 0;

	dub = malloc((len + 1) * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	if (dub == NULL)
	{
		return (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		dub[i] = str[i];
	}
	dub[len] = '\0';
	return (dub);

}
