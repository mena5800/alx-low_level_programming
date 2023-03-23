/*
 * auth : mina safwat
 * file : 0-print_name.c
 */

#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: the name to print
 * @f: is a function
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
