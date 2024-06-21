#include<stdio.h>

/**
 *main - is the entry point of the program.
 *
 * Description: The function uses putchar to display alphabets.
 *
 * Return: the result is always 0 to show success
 */
int main(void)
{
	char ch; 
	char CH;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (CH = 'A'; CH <= 'Z'; CH++)
	{
		putchar(CH);
	}
	putchar('\n');
	return (0);
}
