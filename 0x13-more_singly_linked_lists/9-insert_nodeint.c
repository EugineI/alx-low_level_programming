#include<stdlib.h>
#include"lists.h"
/**
 * insert_nodeint_at_index - inserts node at given index
 * @head: first node
 * @idx: the index to insert at
 * @n: data
 * Return: NULL or address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *old;
	unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	new = (listint_t *) malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	old = *head;
	while (old != NULL && i < idx - 1)
	{
		old = old->next;
		i++;
	}
	if (old == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = old->next;
	old->next = new;
	return (new);
}
