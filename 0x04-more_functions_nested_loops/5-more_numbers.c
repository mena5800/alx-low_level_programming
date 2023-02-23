/*
 * auth : mina safwat samy
 * file : 5-more_numbers.c
 */

#include<stdio.h>
#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 * followed by a new line
 * Return: void
 */

void more_numbers(void)
{
	int i;
	int end;
	int flag;
	int j;

	for (j = 0; j < 10; j++)
	{

		flag = 0;
		i = 48;
		end = 57;

		for (i; i <= end; i++)
		{
			if (flag)
			{
				_putchar('1');
			}
			_putchar(i);
			if (i == 57)
			{
				i = 47;
				end = 52;
				flag = 1;
			}

		}
		_putchar('\n');
	}
}
