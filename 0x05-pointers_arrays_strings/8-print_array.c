/*
 * auth: Mina Safwat
 * file: 8-print_array.c
 */

#include "main.h"

/**
 * print_array - prints element of array.
 * @a: array.
 * @n: length.
 * Return: void.
 */

void print_array(int *a, int n)
{
	int *m = a;
	int i;

	if (n < 1)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < n - 1; i++)
	{
		printf("%d, ", *m);
		m++;
	}

	printf("%d\n", *m);

}
