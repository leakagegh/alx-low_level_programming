#include "lists.h"

/**
 * listint_len - Calculates the count of elements in a linked list
 * @h: Pointer to the head of the linked list
 *
 * Return: The number of nodes in the linked list.
 */
size_t listint_len(const listint_t *h)
{
if (h == NULL)
return (0);

return (1 + listint_len(h->next));
}
