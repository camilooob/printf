#include "holberton.h"

/**
 * driver - selects a print function according to specifier
 * @format: string that contains the specifier
 * Return: pointer to the print function
 */
int (*driver(char *format))(char *format, va_list)
{
	int i;

	print_fn getfn[] = {
		{"%c", print_char},
		{"%s", print_string},
		{NULL, NULL}
	};

	if (format[1] == ' ' || format[1] == '\0')
		return (NULL);
	for (i = 0; getfn[i].specifier; i++)
	{
		if (format[1] == getfn[i].specifier[1])
			return (getfn[i].fn);
	}
	return (NULL);
}
