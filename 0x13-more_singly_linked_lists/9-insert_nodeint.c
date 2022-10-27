#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at a given index
 * @head: beginning of list
 * @idx: index given
 * @n: number of elts
 * Return: listint_t
 */


listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nnode;

	if (head && *head)
	{
		if (idx > 0)
		{
			nnode = insert_nodeint_at_index(&(*head)->next, idx - 1, n);
			return (nnode);

		}
		else
			return (insert(&(*head), n));
	}
	else if (head && !*head && idx == 0)
		return (insert(&(*head), n));

	return (NULL);

}

/**
 * insert - Inserts a new node
 * @head: head of list
 * @n: Initializer for n data in node
 *
 * Return: Pointer to new node.
 */

listint_t *insert(listint_t **head, int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
