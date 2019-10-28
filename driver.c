#include "holberton.h"

/**
 * driver - selector for type of fun.
 * @format: string.
 * Return: pointer print
 */
int (*driver(char *format))(char *format, va_list)
{
	int i;

	structype selector[] = {
		{"%c", printc},
		{"%s", printstr},
		{NULL, NULL}
	};

	if (format[1] == ' ' || format[1] == '\0')
		return (NULL);
	for (i = 0; selector[i].q; i++)
	{
		if (format[1] == selector[i].q[1])
			return (selector[i].u);
	}
	return (NULL);
}
