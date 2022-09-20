#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - keygen for 101-crackme
 * Return: 0 .
 */
int main(void)
{
	int ran = 0, c = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (c < 2772)
	{
		ran = rand() % 128;
		if ((c + ran) > 2772)
			break;
		c = c + ran;
		printf("%c", ran);
	}
	printf("%c\n", (2772 - c));
	return (0);
}
