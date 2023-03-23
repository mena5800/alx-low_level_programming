#include "3-calc.h"
#include <stdlib.h>
#include "function_pointers.h"

/**
 * main - is a calculator
 * @argc: number of args
 * @argv: arguments
 * Return: always 0
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int num1, num2, result;
	char *op;

	if (argc != 4)
		return (0);

	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);

	result = get_op_func(op)(num1, num2);

	if (result)
	{
		printf("%d\n", result);
		return (0);
	}

	return (0);
}

