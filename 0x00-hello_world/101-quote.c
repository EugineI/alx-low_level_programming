#include<unistd.h>

/*
 * main - function main is the start point of the program
 *
 *Description: the main function displaying a message without using a funtion
 *
 * Return: result is 1 to show error
 */
int main(void)
{
	char m[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, m, 59);
	return (1);
}
