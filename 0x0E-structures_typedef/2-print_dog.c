#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print
 * @d: pointer
 *
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		printf("");

	if ((*d).name == NULL)
		printf("%s\n", Name: (nil));

	if ((*d).age == NULL)
		printf("%f\n", (nil));

	if ((*d).owner == NULL)
	       printf("%s\n", (nil));
}
