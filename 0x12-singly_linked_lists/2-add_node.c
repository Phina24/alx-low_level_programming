#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list (list_t)
 * @head: double pointer to the list_t list
 * @str: new string to be added in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *a;
	unsigned int b = 0;

	while (str[b])
	b++;

	a = malloc(sizeof(list_t));
	if (!a)
	{
		return (NULL);
	}

	a->str = strdup(str);
	a->len = b;
	a->next = (*head);
	(*head) = a;

	return (*head);
}
