#include <unistd.h>
#include "main.h"
/**
 * print_string - Print a string.
 *
 * @args: variadic element
 * Return: The number of characters printed.
 */
int print_string(va_list args)
{
	char *str = va_arg(args, char *);
	int char_number;

	if (str == NULL)
		str = "(null)";

	for (char_number = 0; str[char_number]; char_number++)
		_putchar(str[char_number]);
	return (char_number);
}

