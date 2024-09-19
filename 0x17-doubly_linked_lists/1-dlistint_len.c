#include"lists.h"
#include<stdio.h>
/**
 * dlistint_len - length of the list
 * @h: pointer to head
 * Return: length of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
