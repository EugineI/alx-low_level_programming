#include"lists.h"
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
/**
 * listint_len - returns number of elements
 * @h: the node holding the pointer
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *ptr = h;
	int count = 0;

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
