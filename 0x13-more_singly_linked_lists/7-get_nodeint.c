#include"lists.h"
#include<stdlib.h>
/**
 * get_nodeint_at_index - gets the nth note
 * @head: first node
 * @index: n
 * Return: head or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *ptr;

	if (head == NULL)
	{
		return (NULL);
	}
	ptr = head;
	i = 0;
	while (ptr != NULL && i < index)
	{
		ptr = ptr->next;
		i++;
	}
	return (ptr);
}
