#include "lists.h"
#include <string.h>

/**
 * add_node_end - will add a node at the end of a list
 * @head: pointer to head of list
 * @str: string to be added
 * Return: address of new node or null otherwise
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *temp;
	int i;
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	temp = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (i = 0; str[i];)
		i++;

	new->str = temp;
	new->len = i;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
	return (*head);
}
