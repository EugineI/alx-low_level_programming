#include"lists.h"
#include<stdlib.h>
/**
 * delete_nodeint_at_index - deletes a node at a given index
 * @head: first node
 * @index: index
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *old, *new;
	unsigned int i = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	new = *head;
	old = NULL;
	while (new != NULL && i < index)
	{
		old = new;
		new = new->next;
		i++;
	}
	if (new == NULL)
	{
		return (-1);
	}
	if (old == NULL)
	{
		*head = new->next;
	}
	else
	{
		old->next = new->next;
	}
	free(new);
	return (1);
}
