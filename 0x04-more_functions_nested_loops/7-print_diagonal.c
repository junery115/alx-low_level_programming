#include "main.h"

/**
 * print_diagonal - prints a line on screen
 * @n: number to print diagonally
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j;
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}

	}

	_putchar('\n');
}
