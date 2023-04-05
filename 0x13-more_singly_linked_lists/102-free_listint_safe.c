#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - frees a listint_t linked list.
 * @h: pointer to pointer to the head of the list.
 * Return: the size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
    size_t size = 0;
    listint_t *slow, *fast;

    if (h == NULL || *h == NULL)
        return (0);

    slow = *h;
    fast = (*h)->next;

    while (fast && fast < slow)
    {
        size++;
        free(slow);
        slow = fast;
        fast = fast->next;
    }

    free(slow);
    size++;

    if (fast)
    {
        size++;
        free(fast);
    }

    *h = NULL;

    return (size);
}

