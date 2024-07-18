#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
/**
 * checkDigit - checks whether a string is a number
 *
 * @str: string
 *
 * Return: 1 or 0
 */
int checkDigit(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (!isdigit(str[i]))
		{
			return (0);
		}
	}
	return (1);
}
/**
 * multiply - give the product of wo numbers
 *
 * @num1: the first passed argument.
 *
 * @num2: the second argument passed
 *
 * Return: product of two numbers
 */
unsigned long multiply(char *num1, char *num2)
{
	unsigned long mul;

	mul = strtoul(num1, NULL, 10) * strtoull(num2, NULL, 10);
	return (mul);
}
/**
 * main - start point
 *
 * @argc: arguments count
 *
 * @argv: argument vector
 *
 * Return: always 0;
 */
int main(int argc, char *argv[])
{
	unsigned long mul;
	char *num1;
	char *num2;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (!checkDigit(argv[1]) || !checkDigit(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}
	num1 = malloc(strlen(argv[1]) + 1);
	num2 = malloc(strlen(argv[2]) + 1);
	if (num1 == NULL || num2 == NULL)
	{
		printf("Error\n");
		exit(98);
	}
	strcpy(num1, argv[1]);
	strcpy(num2, argv[2]);
	mul = multiply(num1, num2);
	printf("%lu\n", mul);
	free(num1);
	free(num2);
	return (0);
}
