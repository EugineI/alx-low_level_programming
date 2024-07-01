#include "main.h"
/**
 * rev_string - reverses the string
 *
 * @s: string
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	char *c1 = s;
	char *cn = s;
	char new;

	while (*cn != '\0')
	{
		cn++;
	}
	cn--;
	while (c1 < cn)
	{
		new = *c1;
		*c1 = *cn;
		*cn = new;
		c1++;
		cn--;
	}
}
