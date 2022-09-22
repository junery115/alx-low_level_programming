#include "main.h"

/**
 * _strcat - cancates 2 strings
 *
 * Description: joins one string src to another des
 *
 *@des: destination string
 *@src: source string
 * Return: a character pointer
 */

char *_strcat(char *dest, char *src)
{
	int i, len;

	len = 0;
	while (dest[len] != '\0'){
		len++;
	}

	for (i = 0; *(src + i) != '\0'; i++)
	{
		dest[len + 1] = *(src + i);
	}
	dest[i] = '\0';

	return (dest);
}

