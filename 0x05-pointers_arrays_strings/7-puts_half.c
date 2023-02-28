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
	int counter = 0;
	int i;
	int steps;

	while (*m != '\0')
	{
		counter++;
		m++;
	}

	if (counter % 2 == 0)
		steps = counter / 2;
	else
		steps = (counter + 1) / 2;

	m = str;

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
