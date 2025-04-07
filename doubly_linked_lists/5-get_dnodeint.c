#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 * @head: The head of the doubly linked list.
 * @index: The index of the node to retrieve (starting from 0).
 *
 * Return: The node at the given index, or NULL if it doesn't exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    unsigned int i = 0;
    dlistint_t *temp = head;

    while (temp)
    {
        if (i == index)
            return (temp);
        temp = temp->next;
        i++;
    }
    return (NULL);
}
