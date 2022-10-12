#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index -searches for an integer
 * @array: array of ints
 * @size: number of elts in array
 * @cmp: pointer to function  to cmp values
 * Return: -1 if no elt matches
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, result;

	result = -1;
	if (array && cmp)
	{
		if (size <= 0)
			return (result);
		for (i = 0; i < size; i++)
		{
			cmp(array[i]);
			if (cmp(array[i]) > 0)
			{
				result = i;
				break;
			}
			if ((cmp(array[i]) == (-1)))
				return (result);
		}
	}
	return (result);

}
