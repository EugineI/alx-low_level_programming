#include "main.h"
/**
 * leet - encodes
 *
 * @s: string character
 *
 * Return: character value.
 */
char *leet(char *s)
{
	char num[10] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};
	char alpha[10] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == alpha[j])
			{
				s[i] = num[j];
				break;
			}
		}
	}
	return (s);
}
