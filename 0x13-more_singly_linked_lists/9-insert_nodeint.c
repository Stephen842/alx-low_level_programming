#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_nodeint_at_index - function that insert anew node at a given position
 * @head: pointer to the first node
 * @idx: index of the list where the new node should be added
 * @n: where data will be inserted in the new node
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *cur_node = *head;
	listint_t *pre_node = NULL;
	unsigned int a;
	listint_t *new = NULL;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;

	for (a = 0; cur_node && a < idx; a++)
	{
		pre_node = cur_node;
		cur_node = cur_node->next;
	}
	if (a == idx)
	{
		if (pre_node)
			pre_node->next = new;
		else
			*head = new;
		new->next = cur_node;
		return (new);
	}
	else
	{
		free(new);
		return (NULL);
	}
}
