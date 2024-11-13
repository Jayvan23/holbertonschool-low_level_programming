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

/**
 * new_dog - Creates a new dog.
 * @name: The name of the new dog.
 * @age: The age of the new dog.
 * @owner: The owner of the new dog.
 *
 * Return: A pointer to the new dog (dog_t), or NULL if it fails.
 *
 * Description: This function creates a new dog by dynamically allocating memory
 * for a `dog_t` structure and storing copies of the `name` and `owner` strings.
 * If any memory allocation fails, the function frees any previously allocated
 * memory and returns NULL.
 */
dog_t *new_dog(char *name, float age, char *owner);

#endif
