#include<stdio.h>
/**
 *main - is the entry point of the program.
 *
 * Description:printing all the digits of base 10 using for loop
 *
 * Return: the result is always 0 to show success
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		printf("%d", i);
	}
	printf("\n");
	return (0);
}
