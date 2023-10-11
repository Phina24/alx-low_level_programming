#include <stdlib.h>
#include "dog.h"

/**
 * free_dog: This function frees the memory allocated for a struct dog
 * @d: The struct dog to be freed
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
