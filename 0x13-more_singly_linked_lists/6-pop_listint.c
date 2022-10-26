#include "lists.h"

/**
 * pop_listint - deletes head of list and returns its data
 *
 *@head: pointer to head of node
 * Return: head node data
 *
 */

int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int data = 0;

	if (head && *head)
	{
		data = (*head)->n;
		*head = (*head)->next;
		free(temp);
	}
	return (data);
}
