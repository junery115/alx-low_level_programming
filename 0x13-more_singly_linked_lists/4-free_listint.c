#include "lists.h"

/**
 * free_listint - frees memory occupied by list
 * @head: pointer to head of list
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	if (head)
	{
		free_listint(head->next);
		free(head);
	}

}
