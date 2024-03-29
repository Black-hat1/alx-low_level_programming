#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints elements in a list_t list
 * @h: pointer to the head of the list_t list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_count++;
	}

	return node_count;
}
