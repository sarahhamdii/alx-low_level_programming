#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * *add_node_end - add
 * @head: pointer
 * @str: pointer
 *
 * Return: the address of the new element or NULL if it failed
 *
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *ptr;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = strlen(str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		ptr = *head;
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = new;
	}
	return (new);
}
