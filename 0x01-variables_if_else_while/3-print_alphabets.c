#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entrance to code
 * Description : prints alphabet upper and lowercase
 * Return: 0
 */

int main(void)
{
	char c;
	char ch;

	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c = c + 1;
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	printf("\n");
	return (0);
}

