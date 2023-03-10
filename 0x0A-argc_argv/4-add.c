/*
 * auth: mina safwat
 * file: 4-add.c
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the sum of numbers.
 * @argc: len arguments
 * @argv: arguments
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	for (i = 1 ; i < argc; i++)
	{
		if (atoi(argv[i]) == 0)
		{
			if (*argv[i] == '0')
				continue;
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
