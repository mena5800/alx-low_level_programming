#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: pointer to node;
 * Return: the number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int counter = 0;

	if (h == NULL)
	{
		return (counter);
	}

	while (h)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
