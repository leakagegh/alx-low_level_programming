#include "lists.h"

/**
 * add_nodeint - Include a new node at the beginning of a linked list
 *
 * @head: A pointer to the first node of the list
 * @n: ata to be inserted in the new node
 *
 * Return: Pointer to the new created node, or NULL if the operation fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;

new = malloc(sizeof(listint_t));
if (!new)
return (NULL);

new->n = n;
new->next = *head;
*head = new;

return (new);
}
