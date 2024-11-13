#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog.
 * @name: The name of the new dog.
 * @age: The age of the new dog.
 * @owner: The owner of the new dog.
 *
 * Return: A pointer to the new dog (dog_t), or 0 if it fails.
 *
 * Description:This function creates a new dog by dynamically allocating memory
 * for a `dog_t` structure and storing copies of the `name` and `owner` strings
 * If any memory allocation fails, the function frees any previously allocated
 * memory and returns 0.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int name_len, owner_len;

	d = malloc(sizeof(dog_t));
	if (d == 0)
		return (0);

	name_len = strlen(name) + 1;
	d->name = malloc(name_len);
	if (d->name == 0)
	{
		free(d);
		return (0);
	}

	owner_len = strlen(owner) + 1;
	d->owner = malloc(owner_len);
	if (d->owner == 0)
	{
		free(d->name);
		free(d);
		return (0);
	}

	strcpy(d->name, name);
	d->age = age;
	strcpy(d->owner, owner);

	return (d);
}
