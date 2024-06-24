#include<stdio.h>
/*
 * main- is the entry point
 *
 * description: while loop
 *
 * Return: result 0 to indicate success
 */

int main(void)
{
	int a = 0;
	int b;

	while(a <= 99)
	{
		b = a + 1;
		while(b <= 99)
		{
			putchar((a / 10) + 48);
			putchar((a % 10) + 48);
			putchar(32);
			putchar((b / 10) + 48);
			putchar((b % 10) + 48);
			if (a < 98 || b < 99)
			{
				putchar(44);
				putchar(32);
			}
			b++;
		}
		a++;
	}
		putchar(10);
		return (0);
}
