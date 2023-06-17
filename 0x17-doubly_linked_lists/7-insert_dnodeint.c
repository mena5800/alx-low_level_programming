#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: the head of double linked list
 * @idx: the index of new node.
 * @n: the value of new node.
 * Return: the address of new node.
 *
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *head = *h;
	dlistint_t *prev = NULL;
	dlistint_t *next = NULL;
	unsigned int i;

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	for (i = 0; i < idx; i++)
	{
		head = head->next;
		if (head == NULL)
		{
			return (NULL);
		}
	}
	prev = head->prev;
	next = head;
	new_node->prev = prev;
	new_node->next = next;
	prev->next = new_node;
	next->prev = new_node;
	return (head);
}
