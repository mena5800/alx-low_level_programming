/*
 * auth : mina safwat samy
 * file : 4-print_most_numbers.c
 */

#include<stdio.h>
#include "main.h"

/**
 * print_diagonal - draws a diagonal line on terminal.
 * @n: num of blocks
 * Return: void
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
