/*
 * auth: mina safwat samy
 * file: 0-puts_recursion.c
 */

#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line.
 * @s: the first char in string.
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
}
