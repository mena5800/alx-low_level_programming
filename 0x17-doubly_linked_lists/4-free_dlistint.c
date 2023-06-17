#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list.
 * @head: the head of double list
 * Return: always void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
