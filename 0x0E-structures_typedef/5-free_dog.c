#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Free dogs.
 * @d: The dog to be free.
 *
 * Return:.....
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
