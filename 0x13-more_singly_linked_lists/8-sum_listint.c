#include "lists.h"

/**
 * sum_listint - returns sum of node data
 * @head: beginning of list
 * @Return: an int value
 *
 */

int sum_listint(listint_t *head)
{
	int sum;

	if (head)
	{
		sum = head->n;
		sum  += sum_listint(head->next);
	}
	return (sum);
}

