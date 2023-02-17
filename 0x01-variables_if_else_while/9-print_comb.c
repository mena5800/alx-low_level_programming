/*
 * file: 9-print_comb.c
 * auth: mina safwat
 */

#include<stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers.
 * Return: always return 0
 */

int main(void)
{
char start = 48;
char end = 57;
char comma = 44;
char space = 32;
while (start <= end)
{
	putchar(start);
	putchar(comma);
	putchar(space);
	start++;
}
putchar('\n');
return (0);
}
