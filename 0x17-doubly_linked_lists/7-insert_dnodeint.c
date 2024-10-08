#include"lists.h"
#include<string.h>
#include<stdlib.h>
/**
 * insert_dnodeint_at_index - insert a not at the given index
 * @h: pointer to head
 * @idx: index
 * @n: data
 * Return: NULL address of new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp = *h;
	unsigned int i = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	while (temp && i < idx - 1)
	{
		temp = temp->next;
		i++;
	}
	if (temp == NULL || (temp->next == NULL && i + 1 != idx))
	{
		free(new_node);
		return (NULL);
	}
	if (temp->next == NULL && i + 1 == idx)
		return (add_dnodeint_end(h, n));
	new_node->next = temp->next;
	new_node->prev = temp;
	if (temp->next != NULL)
		temp->next->prev = new_node;
	temp->next = new_node;
	return (new_node);
}
