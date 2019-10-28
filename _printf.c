#include "holberton.h"
/**
 *_printf - Check
 *@format: pointer
 *Return: Always
 */
int _printf(const char *format, ...)
{
	int count1, count2;
	va_list ap;
	char *separata = "";

	typarg tyar[] = {
		{'c', printch},
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
