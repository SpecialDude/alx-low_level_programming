#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Free dog struct from heap memory
 *
 * @d: Pointer of Dog to free
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
