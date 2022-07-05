#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initialize the member data of a dog struct
 *
 * @d: Pointer to an instance of dog struct
 * @name: name of dog
 * @age: Age of dog
 * @owner: Owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}
