#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds node with int value to beginning of a singly linked list
 * @head: A double pointer to the head of the singly linked list
 * @n: An integer value to be stored in the newly created node
 *
 * Return: NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
