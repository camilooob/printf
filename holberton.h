#ifndef PRINTF_H
#define PRINTF_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
int _printf(const char *format, ...);
typedef struct method
{
    char *sp;
    int (*t)(char *format, va_list);
}drive;
int (*driver(char *format));
#endif
