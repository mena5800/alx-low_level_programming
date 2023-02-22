/*
 * auth: mina safwat samy
 * file: 0-putchar.c
 */

#include "main.h"

/**
 * main - prints _putchar, followed by a new line.
 * Return: always (0)
 */

int main(void)
{
	char *word = "_putchar\n";

	while (*word)
	{
		_putchar(*word);
		word++;
	}
	return (0);
}
