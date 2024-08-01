#include"lists.h"
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
/**
 * add_node_end - adds a node to the end of the node
 * @head: first node
 * @str: string literal
 * Return: NULL or address to new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *last;

	if (str == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		last = *head;
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = new;
	}
	new->len = strlen(str);
	return (new);
}
