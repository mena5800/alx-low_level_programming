/*
 * auth: mina safwat
 * file: 2-args.c
 */

#include <stdio.h>

/**
 * main - prints all arguments it receives.
 * @argc: len arguments
 * @argv: arguments
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 1; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
