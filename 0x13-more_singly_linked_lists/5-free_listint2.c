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

	if (head == NULL || *head == NULL)
	{
		return;
	}
	else
	{
		while (*head != NULL)
		{
			temp = *head;
			*head = (*head)->next;
			free(temp);
		}
		*head = NULL;
	}
}
