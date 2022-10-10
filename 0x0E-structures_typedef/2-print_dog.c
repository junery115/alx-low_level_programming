#include "dog.h"
#include "stdio.h"
#include "stdlib.h"

/**
 * print_dog - function that prints a dog
 * @d: struct of type dog
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nill)";
	if (d->owner == NULL)
		d->owner = "(nill)";
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("owner: %s\n", d->owner);
}
