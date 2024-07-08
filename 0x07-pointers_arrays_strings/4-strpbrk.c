#include "main.h"
#include <stddef.h>
/**
 * __strpbrk - checks for matching character in s and accept
 *
 * @s: string
 *
 * @accept: another string variable
 *
 * Return: pointer to byte  that matches accept
 */
char *_strpbrk(char *s, char *accept)
{
	char *sptr = s;
	char *acceptP = accept;

	for (; *sptr != '\0'; sptr++)
	{
		for (; *acceptP != '\0'; acceptP++)
		{
			if (*sptr == *acceptP)
			{
				return s;
			}
		}
	}
	return (NULL);
}
