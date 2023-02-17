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
int start = 48;
int end = 57;
int comma = 44;
int space = 32;
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
