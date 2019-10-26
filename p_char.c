#include "holberton.h"

/**
 * p_char - funcion for char
 * @format: format to print string
 * @args: va_list that contains the character to print
 * Return: number of characters printed
 */
int p_char(char *format, va_list pa)
{
	(void)format;
	_putchar(va_arg(pa, int));
	return (1);
}
