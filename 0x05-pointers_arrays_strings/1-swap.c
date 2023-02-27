/*
 * auth: Mina Safwat
 * file: 1-swap.c
 */

#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: the first pointer.
 * @b: the second pointer.
 * Return: void.
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
