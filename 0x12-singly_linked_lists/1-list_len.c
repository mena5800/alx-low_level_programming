#include "lists.h"

/**
 * list_len - return the size of linked list
 * @h: the head of linked list
 * Return: the size of linked list
 */
size_t list_len(const list_t *h)
{
size_t counter = 0;
while (h)
{
h = h->next;
counter++;
}
return (counter);
}
