/*
 * file: 7-print_tebahpla.c
 * auth: mina safwat
 */

#include<stdio.h>

/**
 * main - prints the lowercase alphabet in reverse, followed by a new line.
 * Return: always return 0
 */

int main(void)
{
int start = 122;
int end = 97;
while (start >= end)
{
	putchar(start);
	start--;
}
putchar('\n');
return (0);
}
