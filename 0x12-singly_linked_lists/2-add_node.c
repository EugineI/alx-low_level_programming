#include<stdio.h>
#include<stdlib.h>
#include"lists.h"
#include<string.h>
/**
 * add_node - function name
 * @head: the first node
 * @str: new data
 * Return: Null or address to new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

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
	new->len = strlen(str);
	new->next = *head;
	*head = new;
	return (new);
}
