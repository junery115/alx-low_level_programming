#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main -Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int len;
	int len2;
	unsigned int ui;
	void *addr;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let'ts try to printf a simple sentence.\n");

	_printf("String:[%s]\n", "I am a string !");
	_printf("Character:[%c]\n", 'H');

}
