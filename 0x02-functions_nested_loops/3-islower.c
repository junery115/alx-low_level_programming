#include "main.h"

/**
 *  _islower -  test if a character is lower
 *  Description: returns 1 if lowercase character and 0 otherwise
 *  @c: character to be tested
 *  Return: 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
