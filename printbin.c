#include "holberton.h"

/**
 * printc - prints a char.
 * @pa: format of char.
 * @format: format
 * Return: number char for printf.
 */
int printbin(char *format, va_list pa)
{
	(void)format;
	_buffer(va_arg(pa, int));
	return (1);
}