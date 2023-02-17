/*
 * file: 105-print_comb5.c
 * auth: mina safwat
 */

#include<stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers.
 * Return: always return 0
 */

int main(void)
{
int space = 32;
int comma = 44;
int i = 0;
int j = 0;
int k = 0;
for (i = 48; i < 58; i++)
{
	for (j = 48; j < 5; j++)
	{
		for (k = j + 1; k < 58; k++)
		{
			for (m = 
			putchar(i);
			putchar(j);
			putchar(k);
			if (i == 55 && j == 56 && k == 57)
			{
				break;
			}
			putchar(comma);
			putchar(space);
		}
	}
}
putchar('\n');
return (0);
}
