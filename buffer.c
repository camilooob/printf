#include <unistd.h>

/**
 * _putchar - print char with stdout
 * @char: char to print
 * Return: Ok(1), error(1).
 */
int _buffer(char ch)
{
	static int bufferContador;
	static char printbuffer[1024];

	if (ch == -1)
	{
		bufferContador = 0;
		return (0);
	}
	if (ch == -2 || bufferContador == 1024)
	{
		write(1, printbuffer, bufferContador);
		bufferContador = 0;
	}
	if (ch != -1 && ch != -2)
	{
		printbuffer[bufferContador] = ch;
		bufferContador++
		return (1);
	}
	return (0);
}
