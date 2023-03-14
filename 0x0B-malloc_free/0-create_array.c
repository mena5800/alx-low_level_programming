/*
 * auth: mina safwat smay
 * file: 0-create_array.c
 */

#include "main.h"

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: the size of array
 * @c: initalization value.
 * Return: Null if size = 0 or pointer to the array.
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	int n = size;
	int i;

	if (size == 0)
		return (NULL);

	arr = malloc(n);
	for (i = 0; i < n; i++)
		arr[i] = c;

	return (arr);
}
