#include <stdio.h>
/**
 *main - the start point of the program
 *
 * Description: The function uses for loop to display digits and comma
 *
 * Return: the result is 0 to indicate success.
 */
int main(void)
{
	int i;
	int n;

	for (i = 0; i <= 9; i++)
	{
		for (n = i + 1; n <= 9; n++)
		{
			putchar(i + '0');
			putchar(n + '0');
			if (i < 8 || n < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
