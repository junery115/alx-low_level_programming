#include "main.h"

/**
 * main - prints _putchar using a function from a header file
 * Description: printing out _putchar followed by new line.
 * Return: 0
 */

int main(void)
{
	char ch[8] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	unsigned int i;

	for (i = 0; i < sizeof(ch); i++)
	{
		_putchar(ch[i]);
	}
	_putchar('\n');
	return (0);
}
