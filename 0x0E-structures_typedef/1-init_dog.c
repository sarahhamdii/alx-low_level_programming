#ifndef MY_DOG
#define MY_DOG
#include <stdio.h>
#include "dog.h"

/**
 * init_dog - short description
 * @name: first character
 * @owner: second character
 * @age: number
 *
 * Return: Always 0.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = strlen(struct dog);
	}
	d->name = name;
	d->age = age;
	d->owner = owner;

	return (0);
}
#endif

