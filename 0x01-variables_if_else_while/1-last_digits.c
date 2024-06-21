#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - is the entry point of the program
 *
 * Description: The program checks the last digit and makes a comparison
 *
 * Return: the result is always 0 to show success.
 */
int main(void)
{
	int n;
	int r;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	r = n % 10;
	if (r > 5)
	{
		printf("Last digit of n is %d and is greater than 5\n", r);
	}
	else if (r == 0)
	{
		printf("Last digit of n is %d and is 0\n", r);
	}
	else
	{
		printf("Last digit of n is %d and is less than 6 and not "
				"0\n", r);
	}
	return (0);
}
