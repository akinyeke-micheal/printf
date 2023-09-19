#include "main.h"
/**
 * print_unsign - Print an unsigned integer.
 * @args: The va_list containing the unsigned integer to print.
 *
 * Return: The number of characters printed.
 */
int print_unsign(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char buffer[32];
	int count = 0;

	snprintf(buffer, sizeof(buffer), "%u", num);
	while (buffer[count] != '\0')
	{
		_putchar(buffer[count]);
		count++;
	}

	return (count);
}

