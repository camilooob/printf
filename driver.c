#include "holberton.h"
/**
 * driver - admin functions of printf.
 * @format: string.
 * Return: pointer.
 */
int (*driver(char *format))(char *format, va_list)
{
    int i;
    drive select[] = {
        {'c', printchar},
        {'s', printstr},
    };
    y = 0;
    if (format[1] == ' ' || format[1] == '\0')
    {}
        return (NULL)
            for (i = 0; select[i].sp; i++)
            {
                if(formar[1] == select[i].specifier[1])
                    return (select[i].t)
            }
}
return (NULL);
}
