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
	if (d == NULL)
		return;

	printf("Name: %s\n", d->name == NULL ? "(nil)" : d->name);
	if (d->age < 0)
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner == NULL ? "(nil)" : d->owner);
}
