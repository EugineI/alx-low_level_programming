#include "main.h"
/**
 * _strlen - culculates the length of a string
 *
 * @s: is the string pointer
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int counter = 0;

	while (*s != '\0')
	{
		counter++;
		s++;
	}
	return (counter);
}
