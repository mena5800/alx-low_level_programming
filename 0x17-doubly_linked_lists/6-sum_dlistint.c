#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data of a dlistint_t linked list.
 * @head: head of list
 * Return: sum of all nodes in list.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (sum);
	}
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
