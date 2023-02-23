/*
 * auth : mina safwat samy
 * file : 10-print_triangle.c
 */

#include<stdio.h>
#include "main.h"

/**
 * print_triangle - prints a triangle,followed by a new line.
 * @size: num of squares
 * Return: void
 */

void print_triangle(int size)
{
	int i;
	int j;
	int rest;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			rest = size - 1 - i;

			for (j = 0; j < rest; j++)
			{
				_putchar(' ');
			}
			for (j = rest; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
