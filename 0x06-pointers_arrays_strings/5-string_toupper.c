#include "main.h"
/**
 * string_toupper - converts lowrcase to uppercase
 *
 * @s: string
 *
 * Return: char *
 */
char *string_toupper(char *s)
{
	char *new = s;

	while (*new != '\0')
	{
		if (*new >= 'a' && *new <= 'z')
		{
			*new = *new - 'a' + 'A';
		}
		new++;
	}
	return (s);
}
