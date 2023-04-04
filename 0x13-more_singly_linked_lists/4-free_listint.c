#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - Frees a listint_t linked list
 * @head: A pointer to the head of the singly linked list
 *
 * Return: Void
 */

void free_listint(listint_t *head)
{
	listint_t *current_node;

	while (head != NULL)
	{
		current_node = head;
		head = head->next;
		free(current_node);
	}
}
