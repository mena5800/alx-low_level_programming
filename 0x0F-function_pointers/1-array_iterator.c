/*
 * auth : mina safwat samy
 * file : 1-array_iterateor.c
 */

#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * @array: array of numbers
 * @size: the size of array
 * @action: pointer to function
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < (int)size; i++)
	{
		action(array[i]);
	}

}
