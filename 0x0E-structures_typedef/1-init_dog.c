#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initialises a variable of type struct dog
 * @d: Pointer to struct dog to initialise
 * @name: Name to be initialised
 * @age: Age to be initialised
 * @owner: Owner to initialise
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
