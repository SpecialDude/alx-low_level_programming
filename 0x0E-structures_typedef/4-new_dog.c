#include "dog.h"
#include <stdlib.h>

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
	dog_t *brand_new_dog = malloc(sizeof(dog_t));

	if (brand_new_dog == NULL)
		return (NULL);

	brand_new_dog->name = name;
	brand_new_dog->age = age;
	brand_new_dog->owner = owner;

	return (brand_new_dog);
}
