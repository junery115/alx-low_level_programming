#include "lists.h"

/**
 * listint_len - counts the elts of linked list
 *  @h: list to be printed
 *  Return: size_t
 *
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
		count++;
	}
	return (count);
}
