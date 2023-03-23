/*
 * auth : mina safwat samy
 * file : 3-get_op_func.c
 */

#include "3-calc.h"

/**
 * get_op_func - select the correct function
 * @s: the operator
 * Return: result
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
	};
	int i;

	i = (s[0] == '+') ? 0 : 5;
	i = (s[0] == '-') ? 1 : 5;
	i = (s[0] == '*') ? 2 : 5;
	i = (s[0] == '/') ? 3 : 5;
	i = (s[0] == '%') ? 4 : 5;
	return (ops[i].f);
}
