#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 * @head: pointer to the node
 * @index: the index of the node that should be deleted. Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *cur_node = *head;
	listint_t *pre_node = NULL;

	if (!head || !(*head))
		return (-1);

	while (index--)
	{
		if (!cur_node)
			return (-1);
		pre_node = cur_node;
		cur_node = cur_node->next;
	}
	if (!pre_node)
		*head = cur_node->next;
	else
		pre_node->next = cur_node->next;
	free(cur_node);
	return (1);
}
