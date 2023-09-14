#include "lists.h"

/**
 * get_dnodeint_at_index - Retrieves the nth node of a dlistint_t linked list
 * @head: Pointer to the head node
 * @index: Index of the desired node
 * Return: address of the node, or NULL if it's not found
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int c_index;

	c_index = 0;

	while (head)
	{
		if (c_index == index)
			return (head);
		++c_index;
		head = head->next;
	}

	return (NULL);
}
