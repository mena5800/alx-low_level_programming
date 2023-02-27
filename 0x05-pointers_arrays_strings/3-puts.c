/*
 * auth: Mina Safwat
 * file: 3-puts.c
 */

#include "main.h"

/**
 * _puts - prints a string followed by a new line,to stdout.
 * @str: string.
 * Return: void.
 */

void _puts(char *str)
{
	char *m = str;

	while (*m != '\0')
	{
		_putchar(*m);
		m++;
	}

	_putchar('\n');

}
