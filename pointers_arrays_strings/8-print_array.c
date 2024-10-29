#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers.
 * @a: Pointer to the array of integers.
 * @n: The number of elements to print from the array.
 *
 * Description: This function prints the first n elements of the
 *              array pointed to by a, followed by a new line.
 *              The numbers are separated by a comma and a space.
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
