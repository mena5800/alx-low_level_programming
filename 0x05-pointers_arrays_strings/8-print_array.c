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
	int *z = a;
	int counter = 0;

	while (*z != '\0')
	{
		counter++;
		z++;
	}

	if (counter == n)
	{
		for (i = 0; i < n - 1; i++)
		{
			printf("%d, ", *m);
			m++;
		}
	}

	printf("%d\n", *m);

}
