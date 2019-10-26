#include "variadic_functions.h"
/**
 * print_all - Check
 *@format: pointer
 *Return: Always
 */
void print_all(const char * const format, ...)
{
	int count1, count2;
	va_list ap;
	char *separata = "";

	typarg tyar[] = {
		{'c', printch},
		{'i', printint},
		{'f', printfloat},
		{'s', printstring}
	};
	count1 = 0;
	va_start(ap, format);

	while (format[count1] != '\0')
	{
		count2 = 0;
		while (count2 < 4)
		{
			if (format[count1] == tyar[count2].c)
			{
				printf("%s", separata);
				tyar[count2].f(ap);
				separata = ", ";
			}
			count2++;
		}
		count1++;
	}
	printf("\n");
	va_end(ap);
}
