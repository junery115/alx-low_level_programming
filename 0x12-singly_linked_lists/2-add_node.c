#include <string.h>
#include "lists.h"

/**
 * add_node - function that adds a node at a beginning of a list
 * @head: pointer to the head of the nod
 * @str: string to be added
 * Return: NULL if add fails else new elt address
 */

list_t *add_node(list_t **head, const char *str)
{
	char *temp;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	temp = strdup(str);
	if (temp == NULL)
	{
		free(new);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;
	new->str = temp;
	new->len = len;
	new->next = *head;

	*head = new;
	return (new);

}


