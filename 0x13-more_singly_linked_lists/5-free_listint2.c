#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Frees a listint_t linked list
 * @head: A pointer to a pointer to the head of the singly linked list
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
}
