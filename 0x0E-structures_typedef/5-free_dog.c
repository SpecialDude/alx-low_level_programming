#include "dog.h"

/**
 * free_dog - Free dog struct from heap memory
 *
 * @d: Pointer of Dog to free
 */
void free_dog(dog_t *d)
{
	free(d);
}
