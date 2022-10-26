#include "lists.h"

/**
 * get_nodeint_at_index - gets a node at nth index
 * @head: head of list
 * @index: index to be found
 * Return: pointer to nth node
 */


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	if (head)
	{
		if (index > 0)
		{
			head = get_nodeint_at_index(head->next, index - 1);
			return (head);
		}
		return (head);
	}
	return (NULL);
}

