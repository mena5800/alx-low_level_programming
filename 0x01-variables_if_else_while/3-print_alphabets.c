/*
 * file: 3-print_alphabets.c
 * auth: mina safwat
 */

#include<stdio.h>

/**
 * main - Write a program that prints the alphabet in lowercase,
 *	and then in uppercase, followed by a new line.
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
start = 65;
end = 90;
while (start <= end)
{
	putchar(start);
	start++;
}

putchar('\n');
return (0);
}

