#include "main.h"

/**
 * puts2 - writes every other character in a string
 *
 * @str:  string to print
 */

void puts2(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		if (count % 2 == 0)
			_putchar(str[count]);
		count++;
	}
	_putchar('\n');
}
