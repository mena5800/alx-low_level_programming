/*
 * auth: Mina Safwat
 * file: 4-print_rev.c
 */

#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by
 * a new line.
 * @s: string.
 * Return: void.
 */

void print_rev(char *s)
{
	char *m = s;

	while (*m != '\0')
	{
		m++;
	}

	m--;

	while (m != s)
	{
		_putchar(*m);
		m--;
	}

	_putchar(*s);
	_putchar('\n');

}
