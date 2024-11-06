#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers and prints the result.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings representing the command-line arguments.
 *
 * Description:
 * This program multiplies two numbers passed as arguments and prints the
 * result. If the program does not receive exactly two arguments, it prints
 * "Error" and returns 1.
 *
 * Return: 0 if successful, 1 if there is an error (not exactly two arguments).
 */
int main(int argc, char *argv[])
{
    int num1, num2, result;

    if (argc != 3)
    {
        printf("Error\n");
        return (1);
    }

    num1 = atoi(argv[1]);
    num2 = atoi(argv[2]);
    result = num1 * num2;

    printf("%d\n", result);

    return (0);
}
