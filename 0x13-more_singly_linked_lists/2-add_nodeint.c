#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - add a new node atthe beginning of a listint_t list
 * @head: function parameter
 * @n: function parameter
 * Return: 0 if successful
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add;

	add = malloc(sizeof(listint_t));
	if (!add)
		return (NULL);
	add->n = n;
	add->next = *head;
	*head = add;
	return (add);




}
