/*
 * auth : mina safwat
 * file : 1-init_dog.c
 */

#include "dog.h"
#include "stdio.h"

/**
 * init_dog - initiallize a var of type struct dog.
 * @d: the dog
 * @name: name of dog
 * @age: age of dog
 * @owner: the owner of dog
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
