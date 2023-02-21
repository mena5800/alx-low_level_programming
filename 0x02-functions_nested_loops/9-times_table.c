/*
 * auth: mina safwat samy
 * file: 9-times_table.c
 */

#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 * Return: void
 */

void times_table(void)
{
	char i = 0;
	char j = 0;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 9; i++)
		{
			printf("%d, ", i * j);
		}
		printf("%d\n", i * j);
	}
}
