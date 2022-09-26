#include "main.h"

/**
 * _memset - function to fill with bytes
 * @s: pointer to a memory area
 * @b: bytes to be written
 * @n: number of types to be written
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
