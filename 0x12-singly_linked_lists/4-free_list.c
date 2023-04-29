#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - free
 * @head: pointer
 *
 */

void free_list(list_t *head)
{
	if (head == NULL)
		return;

	free_list(head->next);
	free(head);
}
