#include<stdio.h>
#include<stdlib.h>
/**
 * main - starting point
 *
 * @argc: count
 *
 * @argv: vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int cents = 0;
	int coins = 0;
	int den[] = {25, 10, 5, 2, 1};
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5; i++)
	{
		while (cents >= den[i])
		{
			cents -= den[i];
			coins++;
		}
	}
	printf("%d\n", coins);
	return (0);
}
