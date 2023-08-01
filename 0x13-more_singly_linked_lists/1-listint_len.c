#include "lists.h"
#include <stdio.h>

/**
 * listint_len - prints elements in a list_int list
 * @h: pointer to the head of the list_t list
 *
 * Return: the number of nodes in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes_count =0;

	while (h)
	{
		nodes_count++;
		h = h->next;
	}

	return (nodes_count);
}
