#include "holberton.h"

/**
 * print_str- print str.
 * @format: format str.
 * @args: va_list with str.
 * Return: number str for print.
 */
int printstr(char *format, va_list pa)
{
	char *string = va_arg(pa, char *);
	int contador;
	(void)format;

	if (string == NULL)
		string = "(null)";
	contador = _puts(string);
	return (contador);
}
