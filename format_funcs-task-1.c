#include "holberton.h"
#include <stdarg.h>
/**
 * print_int - prints decimal numbers
 * @arg_list: arguments list
 * Return: number of characters printed
 */

int print_int(va_list *arg_list)
{
	int d = va_arg(arg_list, int), mult = 1, dc, print_count = 0;

	if (d < 0)
	{
		d = -d;
		_putchar('-');
		print_count++;
	}

	dc = d;
	if (d < 10 && d >= 0)
	{
		_putchar(d + '0');
		print_count++;
	}
	else
	{
		while (dc > 9)
		{
			mult *= 10;
			dc /= 10;
		}
		while (mult > 0)
		{
			_putchar((d / mult) + '0');
			print_count++;
			d -= (d / mult) * mult;
			mult /= 10;
		}
	}

	return (print_count);
}
