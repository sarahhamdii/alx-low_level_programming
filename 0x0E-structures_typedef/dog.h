#ifndef my_dog
#define my_dog
#include <stdio.h>
#include "dog.h"

/**
 * struct dog - short description
 * @name: first character
 * @owner: second character
 * @age: third character
 *
 * Return: Always 0.
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};

#endif
