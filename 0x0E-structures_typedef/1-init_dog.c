#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialize a variable
 * @name: first character
 * @owner: second character
 * @age: number
 * @d: pointer
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
