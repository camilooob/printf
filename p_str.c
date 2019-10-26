#include "holberton.h"

/**
 * print_string - prints a string
 * @format: format to print string
 * @args: va_list that contains the character to print
 * Return: number of characters printed
 */
int p_str(char *format, va_list pa)
{
	char *string = va_arg(pa, char *);
	int count;
	(void)format;

	count = _puts(string);
	return (count);
}
