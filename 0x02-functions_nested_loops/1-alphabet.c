#include "main.h"

/**
 * print_alphabet - prints alphabet in lowercase
 * Description: function that prints the alphabet in lowercase
 * Return: 0
 */

int print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}
