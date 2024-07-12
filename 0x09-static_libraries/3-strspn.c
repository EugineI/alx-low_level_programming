#include "main.h"
/**
 * _strspn - bytes in s and accept
 *
 * @s: string
 *
 * @accept: the other string
 *
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	char *sptr;
	char *acceptP;
	int match;

	for (sptr = s; *sptr != '\0'; sptr++)
	{
		match = 0;
		for (acceptP = accept; *acceptP != '\0'; acceptP++)
		{
			if (*sptr == *acceptP)
			{
				len++;
				match = 1;
			}
		}
		if (!match)
		{
			break;
		}
	}
	return (len);
}
