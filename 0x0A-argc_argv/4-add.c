#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include"main.h"
/**
 * main - entry point
 *
 * @argv: vector
 *
 * @argc: count
 *
 * Return: 0 or -1
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;
	int j;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
