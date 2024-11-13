#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog.
 * @name: The name of the new dog.
 * @age: The age of the new dog.
 * @owner: The owner of the new dog.
 *
 * Return: A pointer to the new dog (dog_t), or NULL if it fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *new_dog;

    new_dog = malloc(sizeof(dog_t));
    if (new_dog == NULL)
        return (NULL);

    new_dog->name = malloc(strlen(name) + 1);
    if (new_dog->name == NULL)
    {
        free(new_dog);
        return (NULL);
    }
    strcpy(new_dog->name, name);

    new_dog->owner = malloc(strlen(owner) + 1);
    if (new_dog->owner == NULL)
    {
        free(new_dog->name);
        free(new_dog);
        return (NULL);
    }
    strcpy(new_dog->owner, owner);

    new_dog->age = age;

    return (new_dog);
}

