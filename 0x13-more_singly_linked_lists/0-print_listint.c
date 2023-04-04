#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list of integers
 * @h: pointer to the head of the linked list
 *
 * Return: Number of nodes in linked list
 */



size_t print_listint(const listint_t *h)
{
	size_t node_count = 0;
	const listint_t *current_node = h;

	while (current_node != NULL)
	{
		printf("%d/d", current_node->n);
		node_count++;
		current_node = current_node->next;
	}

	return (node_count);
}
