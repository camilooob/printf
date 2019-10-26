#include "holberton.h"
int printstr(char *format, va_list)
{
    char *str = va_arg(pa, char *);
    if (str == NULL)
    {
        printf("(nil)");
        return;
    }
    printf("%s", str);
}
