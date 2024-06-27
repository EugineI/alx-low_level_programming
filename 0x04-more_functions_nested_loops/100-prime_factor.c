#include <stdio.h>
/**
 * main - entry point
 *
 * Description: finding the largest prime factor
 *
 * Return: 0 for success.
 */
int main(void)
{
	long number = 612852475143;
	long max;
	long i;

	while (number % 2 == 0)
	{
		max = 2;
		number /= 2;
	}
	for (i = 3; i * i <= number; i += 2)
	{
		while (number % i == 0)
		{
			max = i;
			number /= i;
		}
	}
	if (number > 2)
	{
		max = number;
	}
	printf("%ld\n", max);
	return (0);
}
