#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: string to be printed
 *
 */
void rev_string(char *s)
{
	int count, max, half;
	char first, last;

	count = 0;
	while (s[count] != '\0')
	{
		count++;
	}
	max = count - 1;
	half = max / 2;
	while (half >= 0)
	{
		first = s[max - half];
		last = s[half];
		s[half] = first;
		s[max - half] = last;
		half--;
	}
}
