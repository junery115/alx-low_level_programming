#include "main.h"

/**
 * _sqrt - finds squareroot using recursion
 *@n: number to find  square root
 *@i: int param
 *Return: int
 */

int _sqrt(int n, int i)
{
	if (n < 0)
		return (-1);
	if ((i * i) > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - start here
 * @n: int n
 * Return: int
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}


