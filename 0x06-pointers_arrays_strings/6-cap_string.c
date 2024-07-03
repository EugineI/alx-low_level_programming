#include "main.h"
/**
 * cap_string - capitalises the first letter of each word
 *
 * @s: string
 *
 * Return:  capitalised string.
 */
char *cap_string(char *s)
{
	int i = 0;

	if (s[i] >= 'a' && s[i] <= 'z')
	{
		s[i] = s[i] - 'a' + 'A';
	}
	while (s[i] != '\0')
	{
		if (s[i - 1] == ' ' || s[i - 1] == '\t' || s[i - 1] == '\n'
				|| s[i - 1] == ','
				|| s[i - 1] == ';' || s[i - 1] == '.' || s[i - 1] == '!'
				|| s[i - 1] == '?'
				|| s[i - 1] == '"' || s[i - 1] == '(' || s[i - 1] == ')'
				|| s[i - 1] == '{' || s[i - 1] == '}')
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 'a' + 'A';
			}
		}
		i++;
	}
	return (s);

}
