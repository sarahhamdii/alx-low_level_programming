#include "lists.h"

/**
 * print_list - print
 * @h: constant pointer
 *
 * Return: the number of nodes
 */

size_t print_list(const listint_t *h)
{	
	int i;

	for (i = 0; h != NULL; i++)
	{
			printf("%i\n", h->n);
			h = h->next;
	}
	return (i);
}
