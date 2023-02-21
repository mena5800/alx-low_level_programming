/*
 * auth: mina safwat samy
 * file: 9-times_table.c
 */

#include<stdio.h>
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
			if (i * j < 10 && i != 0)
			{
				putchar(' ');
			}
			printf("%d, ", i * j);
		}
		if (i * j < 10)
		{
			putchar(' ');
		}
		printf("%d\n", i * j);
	}
}
