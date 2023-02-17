/*
 * file: 2-print_alphabet.c
 * auth: mina safwat
 */

#include<stdio.h>

/**
 * main - prints the alphabet in lowercase, followed by a new line.
 * Return: always return 0
 */

int main(void)
{
int start = 97;
int end = 122;
while (start <= end)
{
        putchar(start);
        start++;
}
putchar('\n');
return (0);
}

