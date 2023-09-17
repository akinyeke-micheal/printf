#include <unistd.h>
#include "main.h"
/**
 * print_character - Print a character.
 *
 * @args: variadic elemrnt
 * Return: The number of characters printed.
 */
int print_character(va_list args)
{
	char c = va_arg(args, int);

	return (_putchar(c));
}
