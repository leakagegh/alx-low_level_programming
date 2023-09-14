#include "lists.h"

/**
 * sum_dlistint - Computes the sum of all the 'n' values in a dlistint_t list
 * @head: Pointer to the head node
 * Return: The sum of all 'n' values in the dlistint_t list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
