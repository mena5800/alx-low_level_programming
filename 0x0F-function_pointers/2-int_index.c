/*
 * auth : mina safwat samy
 * file : 2-int_index.c
 */

#include "function_pointers.h"

/**
 * int_index - search for an integer
 * @array: array of numbers
 * @size: the size of array
 * @cmp : is a pointer to funciton to be used to compare values.
 * Return: void
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, cond;
	int index = -1;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		cond = cmp(array[i]);
		if (cond)
		{
			index = i;
			break;
		}
	}

	return (index);
}
