#include"lists.h"
#include<stdlib.h>
/**
 * free_dlistint - freees a list
 * @head: pointer to head
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
