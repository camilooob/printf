#include "holberton.h"

/**
 * print_c - prints a char.
 * @format: format of char.
 * @args: va_list with char.
 * Return: number char for printf.
 */
int print_c(char *format, va_list args)
{
	(void)format;
	_putchar(va_arg(args, int));
	return (1);
}
