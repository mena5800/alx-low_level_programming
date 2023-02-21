/*
 * auth: mina safwat samy
 * file: 11-print_to_98.c
 */

#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * followed by a new line.
 * @n: number
 * Return: void
 */

void print_to_98(int n)
{
	int i = 0;

	if (n < 98)
	{
		for (i = n; i < 98; i++)
		{
			printf("%d, ", i);
		}
	}
	else if (n > 98)
	{
		for (i = n; i > 98; i--)
		{
			printf("%d, ", i);
		}
	}
	printf("%d\n", 98);
}
