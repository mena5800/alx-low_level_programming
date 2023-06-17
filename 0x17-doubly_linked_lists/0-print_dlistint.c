#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: head of double linked list.
 * Return: the number of nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{
	int counter = 0;

	if (h == NULL)
	{
		return (counter);
	}

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}