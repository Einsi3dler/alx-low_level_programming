#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 *print_dog - check the code for null
 *@d: the structure containing the values
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name != NULL)
		{
			printd("Name: %s\n", d->name);
		}
		else
		{
		printf("Name: (nil)\n");
		}
		printf("Age: %f\n", d->age);
		if(d->owner != NULL)
		{
			printf("Owner: %s\n", d->owner);
		}
		else
		{
			printf("Owner: (nil)\n");
		}
	}
}
