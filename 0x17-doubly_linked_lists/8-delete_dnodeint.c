#include"lists.h"
#include<stdlib.h>
/**
 * delete_dnodeint_at_index - deletes a node
 * @head: pointer to head
 * @index: index of node to be deleted
 * Return: 1 for success and -1 for failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = temp->next;
		if (temp->next != NULL)
			temp->next->prev = NULL;
		free(temp);
		return(1);
	}
	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}
	if (temp == NULL)
		return (-1);

	if (temp->next != NULL)
		temp->next->prev = temp->prev;
	if (temp->prev != NULL)
		temp->prev->next = temp->next;
	free(temp);
	return(1);
}
