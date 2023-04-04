#include "lists.h"

/**
 * listint_len - Counts the number of elements in a linked list
 * @h: Pointer to head of the linked list
 *
 * Return: The number of elements in the linked list.
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *current_node = h;

	while (current_node != NULL)
	{
		count++;
			current_node = current_node->next;
	}

	return (count);
}
