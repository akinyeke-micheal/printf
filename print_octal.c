#include "main.h"
/**
 * print_octal - Print an unsigned integer as an octal string.
 * @args: A va_list containing the unsigned int to print.
 *
 * Return: The number of characters printed.
 */
int print_octal(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char buffer[32];
	int count = 0;

	snprintf(buffer, sizeof(buffer), "%o", num);

	for (count = 0; buffer[count] != '\0'; count++)
		_putchar(buffer[count]);

	return (count);
}
