#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A structure representing a dog
 * @name: The dog's name
 * @age: The dog's age
 * @owner: The dog's owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}
dog_t;

void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
