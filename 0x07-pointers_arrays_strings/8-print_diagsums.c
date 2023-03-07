/*
 * auth: mina safwat samy
 * file: 8-print_diagsums.c
 */

#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: pointer.
 * @size: num.
 * Return: void.
 */

void print_diagsums(int *a, int size)
{
	int *temp = a;
	int i = 0;
	int row = 0;
	int column = 0;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += *(temp + ((row * size) + column));
		row++;
		column++;
	}

	row = 0;
	column = size - 1;
	i = 0;

	for (i = 0; i < size; i++)
	{
		sum2 += *(temp + ((row * size) + column));
		row++;
		column--;
	}
	printf("%d, %d\n", sum1, sum2);

}
