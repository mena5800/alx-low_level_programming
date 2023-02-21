/*
 * auth: mina safwat samy
 * file: 1-alphabet.c
 */

#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line.
 * Return: always (0)
 */

void print_alphabet(void)
{
	char i = 0;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
