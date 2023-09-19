#include "main.h"
/**
 * print_integer - Print an integer.
 * @args: The argument list containing the integer
 * Return: The number of characters printed.
 */
int print_integer(va_list args)
{
	int number = va_arg(args, int);
	int counter = 0;
	int is_negative = 0;
	char buffer[12];  /* Assuming INT_MIN is -2147483648 */

	if (number == 0)
	{
		_putchar('0');
		return (1);
	}

	if (number < 0)
	{
		is_negative = 1;
		number = -number;
	}

	while (number > 0)
	{
		int digit = number % 10;

		buffer[counter++] = digit + '0';
		number /= 10;
	}

	if (is_negative)
		buffer[counter++] = '-';
	while (counter > 0)
	{
		_putchar(buffer[--counter]);
	}

	return (counter);
}
\n
