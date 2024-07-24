#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[]);
/**
 * print_opcodes - return opcode for the main.
 * @bytes: bytes
 * Return: opcode
 */
void print_opcodes(int bytes)
{
	void (*main_ptr)(void) = (void (*)(void))&main;
	unsigned char *ptr = (unsigned char *)main_ptr;
	int i;

	for (i = 0; i < bytes; ++i)
	{
		printf("%02x", *ptr++);
		if (i != bytes - 1)
		{
			printf(" ");
		}
	}
	printf("\n");
}
/**
 * main - entry
 * @argc: count
 * @argv: vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc  != 2)
	{
		printf("Error\n");
		return (1);
	}
	int bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		return (2);
	}
	print_opcodes(bytes);
	return (0);
}
