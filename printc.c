#include "holberton.h"

/**
 * print_c - prints a char.
 * @format: format of char.
 * @args: va_list with char.
 * Return: number char for printf.
 */
int printc(char *format, va_list pa)
{
	(void)format;
	_putchar(va_arg(pa, int));
	return (1);
}
