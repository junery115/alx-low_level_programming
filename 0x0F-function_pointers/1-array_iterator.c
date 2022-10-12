#include <stddef.h>

/**
 * array_iterator - function that executes a function given as parameter
 * @array: array
 * @size: size of array
 * @action: passed in function
 * Return: void
 */

void array_iterator(int *array, size_t size, void(*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}

}
