#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
int len;
int len2;
    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    _printf("Let's try to printf a simple sentence.\n");
    _printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    _printf("Negative:[%d]\n", -762534);
    _printf("Length:[%d, %i]\n", len, len2);

    return (0);
}
