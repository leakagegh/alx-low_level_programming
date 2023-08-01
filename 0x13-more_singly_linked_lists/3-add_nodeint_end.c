#include "lists.h"

/**
 * add_nodeint_end - attach a node at the end of a linked list.
 *
 * @head: Pointer to the first element in the list
 * @n: Data to embed in the new element
 *
 * Return: A pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new;
listint_t *current = *head;

new = malloc(sizeof(listint_t));
if (!head)
return (NULL);

new->n = n;
new->next = NULL;

if (!new)
return (NULL);

if (!*head)
{
*head = new;
return (new);
}

while (current->next)
current = current->next;

current->next = new;

return (new);
}
