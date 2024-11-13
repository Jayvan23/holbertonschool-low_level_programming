#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints the details of a dog.
 * @d: Pointer to a struct dog to print.
 *
 * Description: This function prints the name, age, and owner of a dog.
 * If any of these fields are NULL, it prints (nil) instead of the field value.
 * If the struct itself is NULL, nothing is printed.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	printf("Age: %.6f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
