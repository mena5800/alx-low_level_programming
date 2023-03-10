/*
 * auth: mina safwat
 * file: 0-whatsmyname.c
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * main - mul 2 numbers.
 * @argc: len arguments
 * @argv: arguments
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
