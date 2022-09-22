#include "main.h"

/**
 * _strcat - cancates 2 strings
 *
 * Description: joins one string src to another des
 *
 *@dest: destination string
 *@src: source string
 * Return: a character pointer
 */

char *_strcat(char *dest, char *src)
{
	int len, i;

	for (len = 0; dest[len] != '\0'; len++)
		;
	for (i = 0; src[i] != '\0'; i++)

		dest[len + i] = src[i];

	dest[len + i] = '\0';


	return (dest);



}

