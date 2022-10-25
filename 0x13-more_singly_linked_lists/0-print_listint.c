#include "lists.h"

/**
 * print_listint - prints the elts of linked list
 *  @h: list to be printed
 *  Return: size_t
 *
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
