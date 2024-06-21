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
	int n;
	int m;

	for (m = 0; m <= 99; m++)
	{
		for (n = m + 1; n <= 99; n++)
		{
			putchar((m / 10) + '0');
			putchar((m % 10) + '0');
			putchar(' ');
			putchar((n / 10) + '0');
			putchar((n % 10) + '0');
			if (m < 98 || n < 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
