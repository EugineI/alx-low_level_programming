#include"lists.h"
#include<stdio.h>
/**
 * list_len - number of elements
 * @h: pointer to next node;
 * Return: number of elements.
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
