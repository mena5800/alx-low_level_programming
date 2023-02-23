/*
 * auth : mina safwat samy
 * file 6-print_line.c
 */

#include<stdio.h>
#include "main.h"

/**
 * print_line - draw staright line in the termial.
 * @n: num of _ .
 * Return: void
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
