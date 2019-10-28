#include "holberton.h"

/**
 * _printf - prints formatted data to stdout
 * @format: string that contains the format to print
 * Return: number of characters written
 */
int _printf(char *format, ...)
{
	int written = 0, (*print_fn)(char *, va_list);
	char specifier[3];
	va_list args;

	if (format == NULL)
		return (-1);
	specifier[2] = '\0';
	va_start(args, format);
	_putchar(-1);
	while (format[0])
	{
		if (format[0] == '%')
		{
			print_fn = driver(format);
			if (print_fn)
			{
				specifier[0] = '%';
				specifier[1] = format[1];
				written += print_fn(specifier, args);
			}
			else if (format[1] != '\0')
			{
				written += _putchar('%');
				written += _putchar(format[1]);
			}
			else
			{
				written += _putchar('%');
				break;
			}
			format += 2;
		}
		else
		{
			written += _putchar(format[0]);
			format++;
		}
	}
	_putchar(-2);
	return (written);
}
