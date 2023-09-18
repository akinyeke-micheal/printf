#include "main.h"
/**
 * _printf - Print formatted text to stdout.
 * @format: The format string.
 * @...: The arguments to format and print.
 *
 * Return: The number of characters printed.
 */
int _printf(const char *format, ...)
{
	va_list args;
	int printed_chars = 0;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
				break;
			else if (*format == 'c')
				printed_chars += print_character(args);
			else if (*format == 's')
				printed_chars += print_string(args);
			else if (*format == '%')
				printed_chars += print_percent();
			else if (*format == 'd' || *format == 'i')
				printed_chars += print_integer(args);
			else if (*format == 'b')
				printed_chars += print_binary(args);
			else if (*format == 'u')
				printed_chars += print_unsign(args);
			else if (*format == 'o')
				printed_chars += print_octal(args);
			else if (*format == 'x' || *format == 'X')
				printed_chars += print_hex(args, *format);
		}
		else
		{
			_putchar(*format);
			printed_chars++;
		}
		format++;
	}

	va_end(args);
	return (printed_chars);
}
