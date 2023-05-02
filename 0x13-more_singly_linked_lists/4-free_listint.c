#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - free
 * @head: pointer
 */

void free_listint(listint_t *head)
{
	if (head == NULL)
		return;

	free_listint(head->next);
	free (head);
}
