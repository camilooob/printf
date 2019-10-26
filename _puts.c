#include "holberton.h"
/**
  * _puts - count the characters on a string
  * @str: a pointer the integer we want to set to 402
  *
  * Return: int
  */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
