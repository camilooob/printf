#include "holberton.h"
/**
 * driver - admin functions of printf.
 * @format: string.
 * Return: pointer.
 */
int (*driver(char *format))(char *format, va_list)
{
    va_list pa;
    int i, y;
    drive select[] = {
        {'c', printchar},
        {'s', printstr},
    };
    y = 0;
    va_start(pa, format);
    while (format[y] != '\0')
    {
        i = 0;
        while (i < 2)
        {
            if (format[y] == drive[i].ch)
            {
                driver[i].t(pa);
            }
            i++;
        }
        y++;
    }
    _puts("\n");
    va_end(pa);
}
