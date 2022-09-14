#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet 10 times
 * Description: This function will print alphabet 10 times and a new line
 * Return: 0
 */


void print_alphabet_x10(void)
{
	int i;
	for (i = 1; i <= 10; i++)
	{
		char c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
	_putchar('\n');
	}
}
