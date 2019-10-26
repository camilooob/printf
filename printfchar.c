#include "holberton.h"
/**
 * printc - print char
 * @pa: Input data.
 * Return: Nothing.
 */
 int printchar(char *format, va_list)
 {
     printf("%c", va_arg(pa, int));
 }
