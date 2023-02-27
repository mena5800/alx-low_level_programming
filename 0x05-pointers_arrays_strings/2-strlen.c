/*
 * auth: Mina Safwat
 * file: 2-strlen.c
 */

#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: the first pointer.
 * Return: the length of string.
 */

int _strlen(char *s)
{
	char *m = s;
	int counter = 0;

	while (*m != '\0')
	{
		m++;
		counter++;
	}

	return (counter);
}
