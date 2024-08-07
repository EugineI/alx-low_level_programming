#include"function_pointers.h"
/**
 * print_name - prints name
 * @name: 1st member
 * @f: function pointer
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	(*f)(name);
}
