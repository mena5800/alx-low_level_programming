/*
 * auth: mina safwat
 * file: 4-add.c
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - print the sum of numbers.
 * @argc: len arguments
 * @argv: arguments
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i;
	int j;
	int sum = 0;

	for (i = 1 ; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}

		}

		if (atoi(argv[i]) > 0)
			sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
