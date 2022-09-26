#include "main.h"

/**
 *_memcpy - copies memory
 *@dest: destination to be copied to
 *@src: source to copy
 *@n:  size to  be copied
 *Return: destination memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);

}
