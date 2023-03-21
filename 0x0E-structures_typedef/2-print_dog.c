/*
 * auth : mina safwat
 * file : 2-print_dog.c
 */

#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print the info of dog
 * @d:dog
 * Return:void
 */

void print_dog(struct dog *d)
{
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
