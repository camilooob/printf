#include "holberton.h"

/**
 * p_char - funcion for char
 * @format: format to print string
 * @pa: va_list that contains the cha.
 * Return: 1
 */
int p_char(char *format, va_list pa)
{
	(void)format;
	_putchar(va_arg(pa, int));
	return (1);
}
