#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entrance to code
 * Description : printing base 10 single dig numbers
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(48 + i);
	}
	putchar('\n');
	return (0);
}
