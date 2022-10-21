#include "lists.h"
#include <stdlib.h>

/**
 * free_list - clears list
 * @head: pointer to first node
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *tmp;

	if (head)
	{
		while (head)
		{
			tmp = head->next;
			if (head->str)
				free(head->str);
			free(head);
			head = tmp;
		}
	}
}

