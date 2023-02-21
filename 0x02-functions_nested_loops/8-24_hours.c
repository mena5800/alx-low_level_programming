/*
 * auth: mina safwat samy
 * file: 8-24_hours.c
 */

#include<stdio.h>
#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59.
 * Return: void
 */

void jack_bauer(void)
{
	char i = 0;
	char j = 0;

	for (i = 0; i <= 23; i++)
	{
		if (i < 10)
		{
			printf("0%d:", i);
		}
		else
		{
			printf("%d:", i);
		}

		for (j = 0; j <= 59; j++)
		{
			if (j < 10)
			{
				printf("0%d\n", j);
			}
			else
			{
				printf("%d\n", j);
			}
		}
	}


}
