#include "lists.h"

/**
 * reverse_listint - Reverses a linked list
 * @head: Pointer to the first node of the original list
 * Return: Pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL;
listint_t *current = *head;

while (current != NULL)
{
listint_t *next = current->next;
current->next = prev;
prev = current;
current = next;
}

*head = prev;
return (prev);
}
