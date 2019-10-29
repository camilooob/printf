#include "holberton.h"

/**
 * printpercent - prints %
 * @format: format
 * @pa: va_list
 * Return: number of characters printed
 */
int printpercent(char *format, va_list pa)
{
	(void)format;
	(void)pa;
	_putchar('%');
	return (1);
}
