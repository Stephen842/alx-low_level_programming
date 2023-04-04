#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint2 - frees a listint_t list.
 * @head: function parameter
 * Return: 0 if successful
 */

void free_listint2(listint_t **head)
{
	listint_t *freenode;
	/* freenode been a temporary variable can also be called temp*/

	while (*head != NULL)
	{
		freenode = *head;
		*head = (*head)->next;
		free(freenode);
	}
}
