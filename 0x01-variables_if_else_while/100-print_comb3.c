/*
 * file: 100-print_comb3.c
 * auth: mina safwat
 */

#include<stdio.h>

/**
 * main - prints all possible different combinations of two digits.
 * Return: always return 0
 */

int main(void)
{
int space = 32;
int comma = 44;
int i = 0;
int j = 0;
for (i = 48; i < 57; i++)
{
	for (j = i + 1; j <= 57; j++)
	{
		putchar(i);
		putchar(j);
		if (i == 56 && j == 57)
		{
			break;
		}
		putchar(comma);
		putchar(space);
	}
}
putchar('\n');
return (0);
}
