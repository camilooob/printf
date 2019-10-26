#include "holberton.h"
/**
 * get_print_fn - selects a print function according to specifier
 * @format: string that contains the specifier
 * Return: pointer to the print function
 */
int (*get_print_fn(char *format))(char *format, va_list)
{
	int i;

	print_fn getfn[] = {
		{"%c", p_char},
		{"%s", p_str},
		{NULL, NULL}
	};
	for (i = 0; getfn[i].specifier; i++)
	{
		if (format[1] == getfn[i].specifier[1])
			return (getfn[i].fn);
	}
}
