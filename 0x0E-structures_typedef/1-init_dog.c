#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * init_dog - this gets the complete variables of the dog
 * @d: this is the original structure of the compilation
 * @name: this variable contains the dog name
 * @age: this variable contains the age
 * @owner: contains the owner name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}

