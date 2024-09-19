#include"lists.h"
#include<string.h>
/**
 * get_dnodeint_at_index - gets nth node
 * @head: pointer to the head
 * @index: place to be inserted
 * Return: null or index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
