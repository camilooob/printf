#include "holberton.h"

/**
 * print_str- print str.
 * @format: format str.
 * @args: va_list with str.
 * Return: number str for print.
 */
int printstr(char *format, va_list args)
{
	char *string = va_arg(args, char *);
	int count;
	(void)format;

	if (string == NULL)
		string = "(null)";
	count = _puts(string);
	return (count);
}
