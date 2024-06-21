#include <stdio.h>
/**
 *main - the start point of the program
 *
 * Description: The function uses for loop and putchar to display hexadecimals
 *
 * Return: the result is 0 to indicate success.
 */
int main(void)
{
	char hexa[] = "0123456789abcdef";
	int i;

	for (i = 0; i <= 15; i++)
	{
		putchar(hexa[i]);
	}
	putchar('\n');
	return (0);
}
