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

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
	}
	dub = malloc((len + 1) * sizeof(char));
	if (dub == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		dub[i] = str[i];
	}
	dub[len] = '\0';
	return (dub);

}
