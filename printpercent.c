#include "holberton.h"

/**
 * printpercent - prints %
 * @format: format (unused)
 * @args: va_list (unused)
 * Return: number of characters printed
 */
int printpercent(char *format, va_list pa)
{
	(void)format;
	(void)pa;
	_buffer('%');
	return (1);
}
