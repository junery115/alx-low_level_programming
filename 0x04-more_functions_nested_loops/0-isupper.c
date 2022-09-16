#include "main.h"

/**
 * _isupper - functions that test a character if its uppercase or not
 * @i: variable to be tested
 * Return: either 1 or zero
 */

int _isupper(int i)
{
	if (i >= 'A' && i <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
