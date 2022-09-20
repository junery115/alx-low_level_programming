#include "main.h"

/**
 * _strcpy - copies a string from one place to other
 * @dest: string you to send
 * @src: string to copy
 * Return: char with copy of string
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
	{
		dest[i] = *(src + i);
	}
	dest[i] = '\0';

	return (dest);
}
