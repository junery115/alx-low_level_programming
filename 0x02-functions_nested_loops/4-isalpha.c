#include "main.h"

/**
 * _isalpha - checks to see if a character is apha or number
 *
 * Description : function returns 1 is alpha and zero otherwise
 * @c: character to be tested
 *
 * Return 0
 *
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 120))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

