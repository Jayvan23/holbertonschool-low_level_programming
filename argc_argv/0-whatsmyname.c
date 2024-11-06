#include <stdio.h>

/**
 * main - Prints the name of the program followed by a new line
 * @argc: The number of command-line arguments (not used in this case)
 * @argv: The array of command-line arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
