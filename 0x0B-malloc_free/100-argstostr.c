#include"main.h"
#include<stdlib.h>
#include<string.h>
/**
 * argstostr - concatenates all arguments
 *
 * @ac: size
 *
 * @av:character
 *
 * Return: new string
 */
char *argstostr(int ac, char **av)
{
	int i = 0;
	int len = 0;
	int len1;
	int p = 0;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		len += strlen(av[i]) + 1;
	}
	str = malloc(len + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		len1 = strlen(av[i]);
		strcpy(&str[p], av[i]);
		p += len1;
		str[p] = '\n';
		p++;
	}
	return (str);

}
