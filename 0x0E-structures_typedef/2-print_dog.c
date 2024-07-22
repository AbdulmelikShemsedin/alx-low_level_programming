#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - prints struct dog
 * @d: the struct to print
 * void: prints
 */
void print_dog(struct dog *d)
{
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
