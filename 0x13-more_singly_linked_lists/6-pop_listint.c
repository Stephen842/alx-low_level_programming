#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: function parameter
 * Return: 0 if successful
 */

int pop_listint(listint_t **head)
{
	listint_t *del;
	int number;

	if (!head || !*head)
		return (0);
	number = (*head)->n;
	del = *head;
	*head = (*head)->next;
	free(del);
	return (number);
}
