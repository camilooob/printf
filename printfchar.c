#include "variadic_functions.h"

/**
 * printch - print a character
 * @ap: My list like parameters
 * Return: Nothing.
 */
void printch(va_list ap)
{
	printf("%c", va_arg(ap, int));
}
