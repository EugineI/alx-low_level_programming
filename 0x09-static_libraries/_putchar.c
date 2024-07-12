#include "main.h"
#include <unistd.h>
/**
 * main - the entry point
 *
 * Description: print putchar statement.
 *
 * Return: 0 for success.
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}
