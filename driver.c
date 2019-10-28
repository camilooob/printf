#include "holberton.h"

/**
 * driver - selects a print function according to specifier
 * @format: string that contains the specifier
 * Return: pointer to the print function
 */
int (*driver(char *format))(char *format, va_list)
{
	int i;

	structype getfn[] = {
		{"%c", printc},
		{"%s", printstr},
		{NULL, NULL}
	};

	if (format[1] == ' ' || format[1] == '\0')
		return (NULL);
	for (i = 0; getfn[i].q; i++)
	{
		if (format[1] == getfn[i].q[1])
			return (getfn[i].u);
	}
	return (NULL);
}
