#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free dog struct pointer
 *
 * @d: pointer to free dog struct
 *
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
