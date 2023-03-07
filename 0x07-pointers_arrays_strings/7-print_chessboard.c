/*
 * auth: mina safwat samy
 * file: 7-print_chessboard.c
 */

#include "main.h"

/**
 * print_chessboard - prints the chessboard.
 * @(*a)[8]: pointer.
 * Return: void.
 */

void print_chessboard(char (*a)[8])
{
	char *temp = *a;
	int i = 0;
	int j = 0;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(*temp);
			temp++;
		}
		_putchar('\n');
	}
}
