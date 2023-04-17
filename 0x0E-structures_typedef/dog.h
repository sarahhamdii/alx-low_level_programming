#ifndef MY_DOG
#define MY_DOG
#include <stdio.h>
#include "dog.h"

/**
 * struct dog - short description
 * @name: first character
 * @owner: second character
 * @age: number
 *
 * Return: Always 0.
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
