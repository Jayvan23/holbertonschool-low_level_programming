#include <stdlib.h>
#include "dog.h"
#include "_putchar.h"

/**
 * new_dog - Creates a new dog.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 * Return: Pointer to the new dog or NULL if it fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *dog;
    int i, j, k;
    char *dog_name, *dog_owner;

    dog = malloc(sizeof(dog_t));
    if (dog == NULL)
        return (NULL);

    /* Copy name */
    for (i = 0; name[i] != '\0'; i++)
        ;
    dog_name = malloc(sizeof(char) * (i + 1));
    if (dog_name == NULL)
    {
        free(dog);
        return (NULL);
    }
    for (j = 0; j <= i; j++)
        dog_name[j] = name[j];

    /* Copy owner */
    for (i = 0; owner[i] != '\0'; i++)
        ;
    dog_owner = malloc(sizeof(char) * (i + 1));
    if (dog_owner == NULL)
    {
        free(dog_name);
        free(dog);
        return (NULL);
    }
    for (k = 0; k <= i; k++)
        dog_owner[k] = owner[k];

    dog->name = dog_name;
    dog->age = age;
    dog->owner = dog_owner;

    return (dog);
}
