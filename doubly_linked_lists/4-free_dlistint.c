#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list.
 * @head: The head of the doubly linked list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
