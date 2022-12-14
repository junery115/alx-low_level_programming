#include "main.h"
/**
 * factorial - prints factorial of a number using recursion
 * @n: number to use
 * Return: integer
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (n * factorial(n - 1));

}
