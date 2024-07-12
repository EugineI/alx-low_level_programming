#include<stdio.h>
#include<stdlib.h>
#include"main.h"
/**
 * main - entry
 *
 * @argc: count
 *
 * @argv: vector
 *
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mul = num1 * num2;

	printf("%d\n", mul);
	return (0);
}
