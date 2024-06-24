#include<stdio.h>
/**
 * main is the entry point of the program
 *
 * description: Fibonacci
 *
 * return: 0 to show success.
 */
int main(void)
{
	int fib;
	int fib2 = 1;
	int fib1 = 0;
	int counter = 1;

	printf("%d, %d, ", fib1, fib2);
	while (counter < 9)
	{
		fib = fib1 + fib2;
		printf("%d, ", fib);
		fib1 = fib2;
		fib2 = fib;
		counter++;
	}
	printf("\n");
	return (0);
}
