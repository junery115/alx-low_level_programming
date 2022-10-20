#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - function to print all elements of a linked list
 * @h: pointer to list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nill)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		count++;
		h = h->next;
	}

	return (count);
}

