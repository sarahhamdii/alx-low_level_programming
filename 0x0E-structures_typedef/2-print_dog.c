#include <stdio.h>
#include "dog.h"

/**
 * struct dog - short description
 * @name: first character
 * @owner: second character
 * @age: number
 *
 * Return: NULL
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		printf("");

	if ((*d).name == NULL)
		printf("%s\n", Name: (nil));

	if ((*d).age == NULL)
		printf("%d\n", (nil));

	if ((*d).owner == NULL)
	       printf("%d\n", (nil));
}
