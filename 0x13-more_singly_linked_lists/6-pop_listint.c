#include"lists.h"
#include<stdlib.h>
/**
 * pop_listint - delete a node and gives its content
 * @head: first node
 * Return: 0 or 1;
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int i;

	if (*head == NULL)
	{
		return (0);
	}
	i = (*head)->n;
	ptr = *head;
	*head = (*head)->next;
	free(ptr);
	return (i);
}
