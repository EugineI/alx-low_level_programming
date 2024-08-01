#include"lists.h"
#include<unistd.h>
/**
 * message - prints message before main
 * Return: nothing
 */
void message(void)
{
	const char *first = "You're beat! and yet, you must allow, \n";
	const char *second = "I bore my house upon my back!\n";

	write(STDOUT_FILENO, first, 39);
	write(STDOUT_FILENO, second, 31);
}
