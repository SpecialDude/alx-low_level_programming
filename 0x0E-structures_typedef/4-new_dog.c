#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - Create a new dog instance
 *
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner
 *
 * Return: dog_t* Pointer to created instance
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_d;
	int l1, l2;

	new_d = malloc(sizeof(dog_t));
	{
		if (new_d == NULL)
			return (NULL);
	}

	l1 = strlen(name);

	new_d->name = malloc(sizeof(char) * (l1 + 1));

	if (new_d->name == NULL)
	{
		free(new_d);
		return (NULL);
	}

	l2 = strlen(owner);

	new_d->owner = malloc(sizeof(char) * (l2 + 1));

	if (new_d->owner == NULL)
	{
		free(new_d->name);
		free(new_d);
		return (NULL);
	}

	new_d->name = name;
	new_d->age = age;
	new_d->owner = owner;

	return (new_d);
}
