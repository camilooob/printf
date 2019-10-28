#include "holberton.h"

/**
 * _puts - prints a string
 * new line, to stdout.
 * @string: input string
 * Return: count of string.
 */
int _puts(char *string)
{
	int contador = 0;

	while (*string)
	{
		_buffer(*string);
		string++;
		contador++;
	}
	return (contador);
}
