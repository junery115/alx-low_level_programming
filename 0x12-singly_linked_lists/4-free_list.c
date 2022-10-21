#include "lists.h"
#include <stdlib.h>

/**
 * free_list - clears list
 * @head: pointer to first node
 * Return: void
 */

void free_list(list_t *head)
{
	if (head)
	{
		if (head->str)
			free(head->str);
		free_list(head->next);
		free(head);
	}
}

