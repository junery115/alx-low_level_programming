#include "main.h"

/**
 * _strcmp - compares 2 strings
 *
 * @s1: first string to be compared
 * @s2: second string to be compared
 *
 * Return: returns an integer
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, guard = 0;

	while (guard == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
			break;
		guard = *(s1 + i) - *(s2 + i);
		i++;
	}

	return (guard);
}
