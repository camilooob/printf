#include "variadic_functions.h"
/**
 * printstring - printa string
 * @ap: My list like parameters
 * Return: Nothing.
 */
void printstring(va_list ap)
{
	char *value = va_arg(ap, char*);

	if (value == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", value);
}
