#include <unistd.h>

/**
 * print_number - Writes an integer to stdout.
 * @num: The integer to print.
 */

void print_number(int num)
{
char buffer[20];
int length = 0;

if (num == 0)
{
buffer[length++] = '0';
}
else
{
while (num > 0)
{
buffer[length++] = (num % 10) + '0';
num /= 10;
}
}

for (int i = 0; i < length / 2; i++) {
char temp = buffer[i];
buffer[i] = buffer[length - i - 1];
buffer[length - i - 1] = temp;
}

buffer[length++] = '\0';
write(1, buffer, length);
}
