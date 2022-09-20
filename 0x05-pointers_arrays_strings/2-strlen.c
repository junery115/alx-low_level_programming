#include "main.h"

/**
 * _strlen - outputs size of a string
 *
 * @s: string to count
 *
 * Return: returns count
 */
int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}
