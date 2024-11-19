#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints anything based on the format string.
 * @format: A string of format specifiers ('c', 'i', 'f', 's').
 *
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char current;

	va_start(args, format);

	while (format && format[i])
	{
		current = format[i];
		if (i > 0)
			printf(", ");

		if (current == 'c')
			printf("%c", va_arg(args, int));
		else if (current == 'i')
			printf("%d", va_arg(args, int));
		else if (current == 'f')
			printf("%f", va_arg(args, double));
		else if (current == 's')
		{
			char *str = va_arg(args, char *);

			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);
		}

		i++;
	}

	printf("\n");

	va_end(args);
}
