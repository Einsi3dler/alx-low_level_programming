#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - meant to free the memory.
 * @d: this contains the structure.
 */

void free_dog(dog_t *d)
{
	free(d);
}

