/*
 * auth: mina safwat samy
 * file: 2-strlen_recursion.c
 */

#include "main.h"

/**
 * _strlen_recursion - return the length of a string.
 * @s: the first char in string.
 * Return: void
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(++s));
	}
}
