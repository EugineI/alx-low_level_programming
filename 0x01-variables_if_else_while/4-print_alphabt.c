#include<stdio.h>
/**
 *main - is the entry point of the program.
 *
 * Description: The program uses putchar to display alphabets.
 *
 * Return: the result is always 0 to show success
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'e' || ch == 'q')
		{
			continue;
		}
		else
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
