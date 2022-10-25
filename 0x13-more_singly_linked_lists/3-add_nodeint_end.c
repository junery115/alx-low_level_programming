#include "lists.h"
/**
 * add_nodeint_end - adds node to end of list
 * @head: beginning of list
 * @n: value to be added
 *
 * Return: listint_t
 */


listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *curr;

	if (new_node == NULL)
		return (NULL);
	new_node->next = NULL;
	new_node->n = n;

	if (*head == NULL)
	{
		*head = new_node;
		return (0);
	}

	curr = *head;

	while (curr->next != NULL)
		curr = curr->next;
	curr->next = new_node;

	return (*head);

}
