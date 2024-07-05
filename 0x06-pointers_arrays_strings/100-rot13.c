#include "main.h"
/**
 * rot13 -rreplacces a number with the 13th character after or before it
 *
 * @s: chactes
 *
 * Return: character
 */
char *rot13(char *s)
{
	char *new = s;

	while (*new != '\0')
	{
		if ((*new >= 'a' && *new <= 'z') || (*new >= 'A' && *new <= 'Z'))
		{
			char base = (*new >= 'a')  ? 'a' : 'A';
			*new = ((*new - base + 13)) + base;
		}
		new++;
	}
	return s;
}
