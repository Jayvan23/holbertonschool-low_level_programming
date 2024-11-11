#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes it usng char
 * @size: the number of elements in the array.
 * @c: the character to initialize each element of the array with.
 *
 * Return: a pointer to the newly created array, or NULL if memory allocation
 *         or if size is 0.
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = (char *)malloc(size * sizeof(char));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
