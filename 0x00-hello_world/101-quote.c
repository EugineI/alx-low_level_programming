#include<unistd.h>

/*
 * main: this is the start point of the program
 *
 *Description: displaying a message without using a funtion
 *
 * Return: result is 1 to show error
 */
int main(void)
{
	char message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	
	write(2, message, 59);
	return (1);
}
