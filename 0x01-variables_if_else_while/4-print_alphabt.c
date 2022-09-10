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

	c = 'a';
	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
		{
		putchar(c);
		}
		c = c + 1;
	}
	printf("\n");
	return (0);
}

