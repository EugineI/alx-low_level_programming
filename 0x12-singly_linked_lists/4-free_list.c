#include"lists.h"
#include<stdlib.h>
/**
 * free_list - frees a list
 * @head: first node
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *new;

	while (head != NULL)
	{
		new = head;
		head = head->next;
		free(new->str);
		free(new);
	}
}
