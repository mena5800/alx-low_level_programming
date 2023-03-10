#include "stdio.h"
#include "stdlib.h"

/**
 * main - print the min coins change.
 * @argc: len args
 * @argv: arguments
 * Return: always 0;
 */

int main(int argc, char *argv[])
{
	int i;
	int reminder;
	int counter = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}

	i = atoi(argv[1]);
	reminder = i;

	counter += i / 25;
	reminder = i % 25;
	counter += reminder / 10;
	reminder = reminder % 10;
	counter += reminder / 5;
	reminder = reminder % 5;
	counter += reminder / 2;
	reminder = reminder % 2;
	counter += reminder / 1;
	reminder = reminder % 1;
	printf("%d\n", counter);

	return (0);
}
