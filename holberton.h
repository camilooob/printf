#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * struct structprint - structure containing specifier
 * and corresponding print functions.
 * @specifier: the location and method to translate data to characters.
 * @fn: print function for specific type.
 */
typedef struct structprint
{
	char *q;
	int (*u)(char *format, va_list);
} structype;
int _buffer(char ch);
int _puts(char *string);
int printc(char *format, va_list);
int printstr(char *format, va_list);
int (*driver(char *format))(char *format, va_list);
int _printf(char *format, ...);
#endif
