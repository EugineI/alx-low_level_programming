#include<stdlib.h>
#include"lists.h"
/**
 * sum_listint - sums up the nodes
 * @head: first node
 * Return: 0 or sum;
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr;

	if (head == NULL)
	{
		return (0);
	}
	ptr = head;
	while (ptr != NULL)
	{
		sum = sum + ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
