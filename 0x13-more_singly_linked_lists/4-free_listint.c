#include "lists.h"

/**
 * free_listint - Frees a linked list of integers.
 *
 * @head: Pointer to the first node of the list to be freed.
 */
void free_listint(listint_t *head)
{
while (head)
{
listint_t *current = head;
head = head->next;
free(current);
}
}
