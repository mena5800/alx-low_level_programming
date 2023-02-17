/*
 * file: 6-print_numberZ.c
 * auth: mina safwat
 */

#include<stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 * ,followed by a new line.
 * Return: always return 0
 */

int main(void)
{
int start = 48;
int end = 57;
while (start <= end)
{
	putchar(start);
	start++;
}
putchar('\n');
return (0);
}
