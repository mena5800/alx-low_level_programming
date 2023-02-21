/*
 * auth: mina safwat samy
 * file: 1-print_alphabet_x10.c
 */

#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet
 * in lowercase, followed by a new line.
 * Return: always (0)
 */

void print_alphabet_x10(void)
{
	char i = 0;
	char j = 0;

	for (j = 0; j < 10; j++)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
