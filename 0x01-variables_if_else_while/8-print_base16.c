/*
 * file: 8-print_base16.c
 * auth: mina safwat
 */

#include<stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 * , followed by a new line.
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
start = 97;
end = 102;
while (start <= end)
{
	putchar(start);
	start++;
}
putchar('\n');
return (0);
}
