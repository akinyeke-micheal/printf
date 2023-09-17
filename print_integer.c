#include "main.h"
/**
 * print_integer - Print an integer.
 * @args: The argument list containing the integer.
 *
 * Return: The number of characters printed.
 */
int print_integer(va_list args)
{
	int number;
	int counter;

	number = va_arg(args, int);
	counter = 0;

	if (number < 0)
	{
		_putchar('-');
		number = -number;
		counter++;
	}

	if (number == 0)
	{
		_putchar('0');
		counter++;
	}

	while (number > 0)
	{
		int point = number % 10;

		_putchar(point + '0');
		number /= 10;
		counter++;
	}

	return	(counter);
}
