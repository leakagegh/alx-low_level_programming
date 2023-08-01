#include "lists.h"

/**
 * get_nodeint_at_index - Returns the node at a specific index in a linked list.
 * @head: The first node of the linked list.
 * @index: The index of the node to be retrieved.
 *
 * Return: Pointer to the node at the specified index, or NULL if not found.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index) {
unsigned int i;
for (i = 0; head != NULL; i++) {
if (i == index)
return head;
head = head->next;
}

return (NULL);
}
