#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list
 * @head: Double pointer to the head of the list
 * @str: String to add
 *
 * Return: Address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *dup_str;
	unsigned int i = 0;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	dup_str = strdup(str);
	if (!dup_str)
	{
		free(new_node);
		return (NULL);
	}

	while (str[i])
		i++;

	new_node->str = dup_str;
	new_node->len = i;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
