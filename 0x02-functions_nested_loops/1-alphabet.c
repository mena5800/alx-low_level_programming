/*
 * auth: mina safwat samy
 * file: 0-putchar.c
 */

#include<stdio.h>

/**
 * main - prints the alphabet, in lowercase, followed by a new line.
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
{
