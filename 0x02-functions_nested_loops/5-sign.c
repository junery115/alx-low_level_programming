#include "main.h"

/**
 *  print_sign - prints a sign and
 *  Descritpion prints a sign and returns a number
 *  @n: value to be tested
 *  Return: 1, 0 or -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
