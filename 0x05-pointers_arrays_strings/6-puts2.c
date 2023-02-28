/*
 * auth: Mina Safwat
 * file: 3-puts2.c
 */

#include "main.h"

/**
 * puts2 - prints every other char.
 * @str: string.
 * Return: void.
 */

void puts2(char *str)
{
	char *m = str;

	while (*m != '\0')
	{
		_putchar(*m);
		m++;
		if (*m == '\0')
		{
			break;
		}
		m++;
	}

	_putchar('\n');

}
