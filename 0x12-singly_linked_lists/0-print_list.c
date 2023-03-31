#include "lists.h"

/**
 * print_list - print the linked list
 * @h: the head of linked list
 * Return: the size of linked list
 */
size_t print_list(const list_t *h)
{
size_t counter = 0;

if (h == NULL)
	return (0);

while (h)
{
if (h->str == NULL)
	printf("[0] (nil)\n");
else
	printf("[%u] %s\n", h->len, h->str);

h = h->next;
counter++;
}
return (counter);
}
