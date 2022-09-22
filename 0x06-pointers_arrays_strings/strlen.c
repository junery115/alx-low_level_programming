#include "main.h"

/**
 * strlen - outputs the length of a string
 *
 * @str: string whose length is calculated
 *
 * Return: length of stringh
 */

int _strlen(char *str){
	int len = 0;
	int i = 0;

	while (str[i] != '\0')
	{
		len++;
		i++;
	}

	return (len);
}
