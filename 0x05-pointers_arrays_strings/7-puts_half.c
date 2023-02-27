/*
 * auth: Mina Safwat
 * file: 7-puts_half.c
 */

#include "main.h"

/**
 * puts_half - prints every other char second.
 * @str: string.
 * Return: void.
 */

void puts_half(char *str)
{
	char *m = str;
	int counter = _strlen(str);
	int steps = counter / 2;
	int i;

	for (i = 0; i < steps; i++)
	{
		m++;
	}

	while (*m != '\0')
	{
		_putchar(*m);
		m++;
	}

	_putchar('\n');

}
