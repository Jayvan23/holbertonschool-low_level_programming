#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Performs simple operations based on user input.
 * @argc: Argument count.
 * @argv: Argument vector.
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
    int num1, num2;
    int (*operation)(int, int);

    if (argc != 4)
    {
        printf("Error\n");
        exit(98);
    }

    num1 = atoi(argv[1]);
    num2 = atoi(argv[3]);

    operation = get_op_func(argv[2]);

    if (operation == NULL)
    {
        printf("Error\n");
        exit(99);
    }

    if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
    {
        printf("Error\n");
        exit(100);
    }

    printf("%d\n", operation(num1, num2));

    return (0);
}
