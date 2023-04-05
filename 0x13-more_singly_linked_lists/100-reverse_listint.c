#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * reverse_listint - function that reverses a listint_t linked list.
 * @head: pointer to the node been the satrting point
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *cur_node = *head;
	listint_t *pre_node = NULL;
	listint_t *next;

	while (cur_node)
	{
		next = cur_node->next;
		cur_node->next = pre_node;
		pre_node = cur_node;
		cur_node = next;
	}
	*head = pre_node;
	return (*head);
}
