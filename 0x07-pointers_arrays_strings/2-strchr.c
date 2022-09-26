#include "main.h"

/**
 * _strchr - finds whether a character exist in a string
 * @s: string to search
 * @c: c to search
 * Return: pointer or NULL
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	i = 0;

	for (; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
