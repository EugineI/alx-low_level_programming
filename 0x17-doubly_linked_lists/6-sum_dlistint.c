#include"lists.h"
#include<stdio.h>
/**
 * sum_dlistint - sums up all the element
 * @head: pointer to the head
 * Return: 0 or sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
