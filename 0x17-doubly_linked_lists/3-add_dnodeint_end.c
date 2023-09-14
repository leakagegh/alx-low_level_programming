#include "lists.h"

/**
 * add_dnodeint_end - Appends a new node to the tail of a dlistint_t list
 * @head: Pointer to the head node
 * @n: Integer to be stored in the new node
 * Return: The address of the new node, or NULL in case of failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *last;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		node->prev = NULL;
		*head = node;
	}
	else
	{
		last = *head;
		while (last->next)
			last = last->next;
		last->next = node;
		node->prev = last;
	}

	return (node);
}
