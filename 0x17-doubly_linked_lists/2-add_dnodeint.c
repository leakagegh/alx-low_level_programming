#include "lists.h"

/**
 * add_dnodeint - Inserts a new node at the start of a dlistint_t list
 * @head: Pointer to the head node
 * @n: An integer to store in the new node
 * Return: address of the new node, or NULL if insertion fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->prev = NULL;
	node->next = *head;

	if (*head)
		(*head)->prev = node;

	*head = node;

	return (node);
}
