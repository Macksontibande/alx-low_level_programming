#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes a variable
 * @d: dog o initialize
 * @name: the name of the dog
 * @age: dog's age
 * @owner: owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
