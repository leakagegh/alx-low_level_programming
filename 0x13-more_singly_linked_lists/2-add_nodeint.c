#include "lists.h"

/**
 * add_nodeint - Include a new node at the beginning of a linked list
 *
 * @head: A pointer to the initial node of the list
 * @n: The data to be inserted in the new node
 *
 * Return: Pointer to the new created node, or NULL if the operation fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
if (head == NULL)
return (NULL);

listint_t *new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->next = *head;
*head = new_node;

return (new_node);
}
