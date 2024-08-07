#include"lists.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/**
 * add_nodeint - adds new node at the beginning
 * @head : pointer to node
 * @n: data
 * Return: address to new node:
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = (listint_t *) malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
