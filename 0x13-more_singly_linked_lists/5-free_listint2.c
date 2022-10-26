#include "lists.h"

/**
 * free_listint2 - frees the entire linked-list
 * @head: pointer to head of list
 * Return: returns void
 *
 */

void free_listint2(listint_t **head)
{
	if (head && *head)
	{
		free_listint2(&(*head)->next);
		free(*head);
		*head = NULL;
	}
}
