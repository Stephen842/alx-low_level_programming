#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: function parameter
 * @n: function parameter
 * Return:  the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *addnode;

	addnode = malloc(sizeof(listint_t));
	if (addnode == NULL)
		return (NULL);
	addnode->n = n;
	addnode->next = NULL;

	if (*head == NULL)
	{
		*head = addnode;
	}
	else
	{
		listint_t *temp = *head;

		while (temp->next != NULL)
			temp = temp->next;
		temp->next = addnode;
	}
	return (addnode);
}
