#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at the specified position in the list
 * @h: Pointer to the head node
 * @idx: Index at which the new node should be inserted
 * @n: Data to be stored in the new node
 * Return: Address of the new node, or NULL if the insertion failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int c_index;
	dlistint_t *node, *prev, *next;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	prev = *h;
	c_index = 0;
	while (prev)
	{
		if (c_index == idx - 1)
			break;
		++c_index;
		prev = prev->next;
	}

	if (prev == NULL)
		return (NULL);

	if (prev->next == NULL)
		return (add_dnodeint_end(h, n));

	next = prev->next;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->prev = prev;
	node->next = next;

	prev->next = node;
	next->prev = node;

	return (node);
}
