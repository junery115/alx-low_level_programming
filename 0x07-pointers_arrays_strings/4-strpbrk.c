#include "main.h"

/**
 *_strpbrk - searches a string for a set of bytes
 *@s: original string
 *@accept: string to be sought
 *Return: pointer to byte in s or NULL if not found
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
		}
	}
	return ('\0');
}
