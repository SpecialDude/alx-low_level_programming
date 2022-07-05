#include "dog.h"

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
	d->name = name;
	d->age = age;
	d->owner = owner;
}
