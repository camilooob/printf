#include "holberton.h"

int printstr(char *format, va_list pa)
{
    char *str = va_arg(pa, char *);
    int count;

    (void)format;

    if (str == NULL)
    {
        string = "(null)";
    }
    count = _puts(string);
    return (count);
}
