#include"lists.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/**
 * free_listint - frees the list
 * @head: node with pointer
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	if (head == NULL)
	{
		return;
	}
	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
