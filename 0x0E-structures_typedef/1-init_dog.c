#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize a variable
 * @d: pointer to initialize
 * @name: variable in pointer
 * @age: variable in pointer
 * @owner: variable in pointer
 * void: initialize var
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
