#include "main.h"
#include <stdio.h>

/**
 * is_lower - determines if char its lowercase
 * @c: char
 * Return: = if true and 0 otherwise
 */

int is_lower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * isdelimiter - determines if char its delimiter
 * @c: char
 * Return: = if true and 0 otherwise
 */

int isdelimiter(char c)
{
	int i;
	char delimiter[] = "\t\n,.!?\"(){}";

	for (i = 0; i < 12; i++)
		if (c == delimiter[i])
			return (1);
	return (0);
}

/**
 * cap_string - function that capitalizes all small letters in a string
 *
 * @str: string to capital
 * Return: a character
 *
 */

char *cap_string(char *str)
{
	char *ptr = str;
	int dimflag = 1;

	while (*str)
	{
		if (isdelimiter(*str))
			dimflag = 1;
		else if (is_lower(*str) && dimflag)
		{
			*str -= 32;
			dimflag = 0;
		}
		else
			dimflag = 0;
		str++;
	}
	return (ptr);

}
