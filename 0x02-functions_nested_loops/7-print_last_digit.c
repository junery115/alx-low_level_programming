#include "main.h"
/**
 * print_last_digit - Prints the last digit
 * of a number.
 *
 * @n: input number as an integer.
 *
 *  Return: last digit.
 */

int print_last_digit(int n)
{

	int z;

	if (n < 0)
	{
		z = -1 * (n % 10);
		_putchar(z + '0');
		return (z);
	}
	else
	{
		z = n % 10;
		_putchar(z + '0');
		return (z);
	}
}
