#include "holberton.h"
/**
 * get_op_func - identify function
 * @s: funct
 *
 * Return: int
 *
 **/
int _printf(const char *format, ...)
{
	va_list pa;
unsigned int i;
int s;

  	va_start(pa, format);


    for(i = 0; *format != '\0'; i++)
    {
        s = (va_arg(pa, int));
    }

    va_end(pa);
	return (s);


}
