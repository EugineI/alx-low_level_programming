#include "main.h"
#include <string.h>
/**
 * palindrome_finder - checks for palindrome.
 *
 * @s: string
 *
 * @left: beginning string
 *
 * @right: end of string
 *
 * Return: 1 or 0
 */
int palindrome_finder(char *s, int left, int right)
{
	if (left >= right)
	{
		return (1);
	}
	if ((s[left]) != (s[right] && left < right))
	{
		return (0);
	}
	return palindrome_finder(s, left + 1, right - 1);
}
/**
 * is_palindrome -  checks is a string is a palindrome
 *
 * @s: string
 *
 * Return:  1 or 0
 */
int is_palindrome(char *s)
{
	int len = 0;
	
	while (s[len] != '\0')
	{
		len++;
	}
	return (palindrome_finder(s, 0, len - 1));
}
