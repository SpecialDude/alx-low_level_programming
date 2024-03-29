#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Print the variables in a dog struct
 *
 * @d: Pointer  dog struct
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name == NULL ? "(nil)" : d->name);
		if (&(d->age) == NULL)
			printf("Age: %s\n", "(nil)");
		else
			printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner == NULL ? "(nil)" : d->owner);
	}
}
