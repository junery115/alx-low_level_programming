#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to unsigned long int
 * @index: index to set bit
 *
 * Return: 1 if success and -1 in failure
 */


int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int num;

	if (index > 63)
		return (-1);

	num = 1 << index;
	*n = (*n | num);

	return (1);

}
