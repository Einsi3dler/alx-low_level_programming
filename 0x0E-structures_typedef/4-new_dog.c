#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * new_dog - this gets and stores the infortion of the dog
 * @name: this variable contains the dog name
 * @age: this variable contains the age
 * @owner: contains the owner name
 *
 * Return: returns the function.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		return (NULL);
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}

