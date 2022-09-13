#include<unistd.h>

/**
 * _putchar: writes the character to standand output
 *
 * @c character that gets written output
 * Return: Onsuccess it returns 1
 * Onerror -1 is returned
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
