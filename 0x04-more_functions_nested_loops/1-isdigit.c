#include "main.h"

/**
 * _isdigit - checks if its a digit
 *  @c: character to checks
 *  Return: 1 or 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
