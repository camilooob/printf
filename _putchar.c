#include <unistd.h>

/**
 * _putchar - writes a char to stdout
 * @character: character to print
 * Return: Success(1), Error(1) sets errno
 */
int _putchar(char character)
{
	static int bufferContador;
	static char printbuffer[1024];

	if (character == -1)
	{
		bufferContador = 0;
		return (0);
	}
	if (character == -2 || bufferContador == 1024)
	{
		write(1, printbuffer, bufferContador);
		bufferContador = 0;
	}
	if (character != -1 && character != -2)
	{
		printbuffer[bufferContador] = character;
		bufferContador++;
		return (1);
	}
	return (0);
}
