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

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
