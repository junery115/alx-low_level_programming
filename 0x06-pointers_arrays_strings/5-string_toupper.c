#include "main.h"

/**
 * string_toupper - makes uppercase
 *
 * @str: to be make uppercase
 *
 * Return: character
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}

	}
	return (str);
}
