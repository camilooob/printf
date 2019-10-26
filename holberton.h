#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
int _printf(const char *format, ...);
typedef struct select
{
	char c;
	void (*f)(va_list listed);
}typarg;
#endif
