#include "main.h"

/**
 * _strlen_recursion - prints string length using recursion
 * @s: string to be printed
 * Return: an integer
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}
