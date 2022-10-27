#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at a particular index
 * @head: start of list
 * @index: index of node to be deleted
 * Return: int
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	int flag = -1;

	if (head && *head)
	{
		if (index > 0)
		{
			flag = delete_nodeint_at_index(&temp->next, index - 1);
			return (flag);
		}
		else
		{
			temp = temp->next;
			free(*head);
			*head = temp;
			return (1);
		}

	}
	return (flag);

}
