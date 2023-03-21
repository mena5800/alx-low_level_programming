/*
 * auth : mina safwat
 * file : 1-init_dog.c
 */

#include "dog.h"
#include "stdio.h"

/**
 * new_dog - initiallize a var of type struct dog.
 * @name: name of dog
 * @age: age of dog
 * @owner: the owner of dog
 * Return: dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t d;

	d.name = name;
	d.age = age;
	d.owner = owner;
	return (&d);
}
