#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: function parameter
 * @index:  the index of the node, starting at 0
 * Return: 0 if successful
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *nth_node = head;
	unsigned int a;

	for (a = 0; nth_node && a < index; a++)
		nth_node = nth_node->next;
	return (nth_node);
}
