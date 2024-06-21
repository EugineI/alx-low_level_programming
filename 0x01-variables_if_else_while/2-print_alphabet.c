#include <stdio.h>
/**
 *main - the start point of the program
 *
 * Description: The function uses for loop and putchar to display the alphabets
 *
 * Return: the result is 0 to indicate success.
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
