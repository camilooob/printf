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
va_list arg;
int done;
va_start (arg, format);
done = driver(stdout, format, arg, 0);
va_end (arg); 
return done;
}
