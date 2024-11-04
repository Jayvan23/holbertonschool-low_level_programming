#include <stdio.h>

/**
 * print_diagsums - Computes the sums of the two diagonals of a square matrix.
 * @a: A pointer to the first element of the square matrix (treated as a 1D array).
 * @size: The dimension of the matrix (number of rows/columns).
 *
 * This function calculates the sums of the primary and secondary diagonals
 * of a square matrix and prints the results in the format "sum1, sum2".
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + (i * size + i));
		sum2 += *(a + (i * size + (size - 1 - i)));
	}

	printf("%d, %d\n", sum1, sum2);
}
