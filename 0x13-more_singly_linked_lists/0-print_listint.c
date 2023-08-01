#include "lists.h"

/**
 * print_listint - Prints all elements of a linked list of integers (listint_t)
 * @h: Pointer to the head of the linked list of type listint_t
 *
 * Return: The count of nodes in the linked list
 */
size_t print_listint(const listint_t *h)
{
size_t num = 0;
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
num++;
}
return (num);
}
