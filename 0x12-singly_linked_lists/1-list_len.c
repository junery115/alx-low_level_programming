#include "lists.h"

/**
 * list_len - list number of elements in linked list
 * @h: the linked list
 * Return: The number of elements in the linked list
 */

size_t list_len(const list_t *h)
{
	size_t  elts = 0;

	while (h)
	{
		elts++;
		h = h->next;
	}
	return (elts);
}




