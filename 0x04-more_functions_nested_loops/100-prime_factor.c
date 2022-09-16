#include <stdio.h>
/**
 * main - largest prime factor of 612852475143.
 * Return: 0
 */
int main(void)
{
	long int x, i, pmfa;

	pmfa = -1;
	x = 612852475143;

	while (x % 2 == 0)
	{
		pmfa = 2;
		x = x / 2;
	}
	for (i = 3; i <= x / 2; i = i + 2)
	{
		while (x % i == 0)
		{
			pmfa = 1;
			x = x / i;
		}
	}
	if (x > 2)
		pmfa = x;

	printf("%ld\n", pmfa);
	return (0);
}
