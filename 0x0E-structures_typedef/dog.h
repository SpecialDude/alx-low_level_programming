#ifndef DOG
#define DOG
/**
 * struct dog - Structure for a dog object
 * @name: Name of dog
 * @age: Age of the dog
 * @owner: The dog's owner
 *
 * Description: A structure to keep dog's info
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
