#include "lists.h"

/**
 * dlistint_len - Counts the number of elements in a dlistint_t list
 * @h: Pointer to the head node
 * Return: The number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t elements;

	elements = 0;

	while (h)
	{
		++elements;
		h = h->next;
	}

	return (elements);
}
