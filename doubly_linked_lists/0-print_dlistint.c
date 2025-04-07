#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 * @h: The head of the doubly linked list.
 *
 * Return: The number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
    size_t count = 0;
    const dlistint_t *temp = h;

    while (temp)
    {
        printf("%d\n", temp->n);
        temp = temp->next;
        count++;
    }
    return (count);
}
