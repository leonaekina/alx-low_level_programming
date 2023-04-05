#include "lists.h"

/**
 * sum_listint - Returns sum of all data (n) in a listint_t linked list
 * @head: Pointer to the head of the linked list
 *
 * Return: Sum of all nodes
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
