#include <stdio.h>

/**
 * main - prints number of arguments
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%s\d", argc-1);
	return (0);
}
