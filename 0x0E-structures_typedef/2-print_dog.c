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
		printf("Name: (nil)\n");

	printf("Age: %s\n", (*d).age);

	if ((*d).owner == NULL)
	       printf("(nil)\n");
}
