#include "dog.h"
#include "stdio.h"
#include "stdlib.h"

/**
 * print_dog - function that prints a dog
 * @dog: struct of type dog
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("owner: %s\n", d->owner);
}
