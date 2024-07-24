#include"3-calc.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * op_add - sum
 * @a: a
 * @b: b
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - difference
 * @a: a
 * @b: b
 * Return: the difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplication
 * @a: a
 * @b: b
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - quotient
 * @a: a
 * @b: b
 * Return: quotient
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - modulus
 * @a: a
 * @b: b
 * Return: quotient
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
