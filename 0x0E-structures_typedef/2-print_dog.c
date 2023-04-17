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
		return;

	if ((*d).name == NULL)
		printf(" Name: (nil)\n");

	if ((*d).age == 0)
		printf("(nil)\n");

	if ((*d).owner == NULL)
	       printf("(nil)\n");
}
