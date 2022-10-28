#include "main.h"
/**
 * clear_bit - turns at bit at an index to 1
 * @n: pointer to unsigned long
 * @index: index of bit to be cleared
 *
 * Return: 1 in success and -1 in error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int num;

	if (index > 63)
		return (-1);

	num = 1 << index;

	if (*n & num)
		*n ^= num;
	return (1);

}
