#include "holberton.h"
/**
 * printc - print char
 * @pa: Input data.
 * Return: Nothing.
 */
 int printchar(char *format, va_list pa)
 {
    (void)formart;
    _putchar(va_arg(pa, int));
    return (1);
 }
