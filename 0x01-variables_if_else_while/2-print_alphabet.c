#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entrance to code
 * Description : prints alphabet
 * Return 0
 */

int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		printf("%c", c);
		c = c + 1;
	}
	printf("\n");
	return (0);
}

