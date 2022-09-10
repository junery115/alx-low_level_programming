#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entrance to code
 * Description : Write hexadecimal numbers
 * Return: 0
 */

int main(void)
{
	char c;
	int d = '0';
	while (d <= '9')
	{
		putchar(d);
		d++;
	}

	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
