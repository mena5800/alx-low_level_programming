/*
 * file: 4-print_alphabet.c
 * auth: mina safwat
 */

#include<stdio.h>

/**
 * main - Print all the letters except q and e
 * Return: always return 0
 */

int main(void)
{
int start = 97;
int end = 122;
while (start <= end)
{
	if (start != 101 && start != 113)
	{
		putchar(start);
	}
	start++;
}
putchar('\n');
return (0);
}

