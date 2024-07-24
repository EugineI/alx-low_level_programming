#include"3-calc.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * main - entry point
 * @argc: count
 * @argv: vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int result;
	int (*ops)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	ops = get_op_func(argv[2]);
	if (!ops)
	{
		printf("Error\n");
		return (99);
	}
	result = ops(num1, num2);
	printf("%d\n", result);
	return (0);
}
