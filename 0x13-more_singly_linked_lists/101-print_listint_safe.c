#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of unique nodes in a looped listint_t linked list
 * @head: Pointer to the head of the listint_t to check
 * Return: If the list is not looped - 0, otherwise - the number of unique nodes in the list
 */
size_t looped_listint_len(const listint_t *head)
{
const listint_t *tortoise = head, *hare = head;
size_t nodes = 0;

while (tortoise && hare && hare->next)
{
tortoise = tortoise->next;
hare = hare->next->next;
if (tortoise == hare)
{
nodes = 1;
while (tortoise->next != hare)
{
nodes++;
tortoise = tortoise->next;
}
return (nodes);
}
}

return (0);
}

/**
 * print_listint_safe - Safely prints a listint_t list.
 * @head: Pointer to the head of the listint_t list.
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
size_t nodes = 0;
const listint_t *original_head = head;

while (head)
{
printf("[%p] %d\n", (void *)head, head->n);
nodes++;

if (head < head->next || head < original_head)
head = head->next;
else
{
printf("-> [%p] %d\n", (void *)head->next, head->next->n);
break;
}
}

return (nodes);
}
