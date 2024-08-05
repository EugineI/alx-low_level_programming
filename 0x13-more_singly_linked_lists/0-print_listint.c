#include"lists.h"
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
/**
 * print_listint - prints all elements of the list
 * @h: node with the pointer
 * Return: number of elements
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *ptr = h;
	int count = 0;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		count++;
		ptr = ptr->next;
	}
	return (count);
}
