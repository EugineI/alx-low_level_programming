#include"lists.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/**
 * free_listint2 - sets head to NULL
 * @head: THE HEAD NODE
 * Return: nothing:
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *prev;

	if (*head == NULL || head == NULL)
	{
		return;
	}
	if ((*head)->next == NULL)
	{
		free(*head);
		*head = NULL;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			prev = temp;
			temp = temp->next;
			free(prev);
		}
		*head = NULL;
	}
}
