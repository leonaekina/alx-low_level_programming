#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: A pointer to a pointer to the first node of the list.
 * @n: The integer value to be stored in the new node.
 *
 * Return: If memory allocation fails or head is NULL - NULL.
 *         Otherwise - Address of the new node.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *current_node;

	new_node = malloc(sizeof(*new_node));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
	*head = new_node;
	return (new_node);
	}

	current_node = *head;

	while (current_node->next != NULL)
		current_node = current_node->next;

	current_node->next = new_node;
	return (new_node);
}
