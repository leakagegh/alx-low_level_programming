#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - Displays elements of a dlistint_t list
 * @h: Pointer to the head node
 * Return: The number of elements in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t elements;

	elements = 0;

	while (h)
	{
		printf("%d\n", h->n);
		++elements;
		h = h->next;
	}

	return (elements);
}
