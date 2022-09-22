#include "main.h"

/**
 * _strncat - cancates 2 strings
 *
 * Description: joins one string src to another des
 *
 *@dest: destination string
 *@src: source string
 *@n: atleast this number of characters
 * Return: a character pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int len, i;

	for (len = 0; dest[len] != '\0'; len++)
		;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[len + i] = src[i];

	dest[len + i] = '\0';


	return (dest);



}

