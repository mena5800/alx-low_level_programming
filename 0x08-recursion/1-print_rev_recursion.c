/*
 * auth: mina safwat samy
 * file: 1-print_rev_recursion.c
 */

#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse.
 * @s: the first char in string.
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(++s);
		s--;
		_putchar(*s);
	}
}
