#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - free
 * @head: pointer
 */

void free_listint2(listint_t **head)
{
	listint_t *h;

	if (head == NULL)
		return;
	while (h)
	{
		h = (*head)->next;
		free(*head);
		*head = h;
	}
	*head = NULL;
}
