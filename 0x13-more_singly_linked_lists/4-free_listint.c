#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - function that frees a listint_t list.
 * @head: function parameter
 * Return: freed nodes
 */

void free_listint(listint_t *head)
{
	listint_t *freenode;

	while (head != NULL)
	{
		freenode = head;
		head = head->next;
		free(freenode);
	}
}
