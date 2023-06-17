#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: the head node of double linked list.
 * @n: the value of new node.
 * Return: new head
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));

	node->n = n;
	node->prev = NULL;
	node->next = *head;
	*head = node;
	return (*head);
}
