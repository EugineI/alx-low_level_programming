#include"lists.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/**
 * add_nodeint_end - adds a not at the end of a list
 * @head - first node
 * @n: data
 * Return: address to the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = (listint_t *) malloc(sizeof(listint_t));
	listint_t *ptr;

	if (new == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		new->n = n;
		ptr = *head;
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = new;
	}
	return (new);
}
