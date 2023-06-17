#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: the head node of double linked list.
 * @n: the value of new node.
 * Return: new head
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *head;

	node->n = n;
	node->prev = NULL;
	node->next = NULL;
	if (temp == NULL)
	{
	*head = node;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = node;
		node->prev = temp;
	}
	return (*head);
}
