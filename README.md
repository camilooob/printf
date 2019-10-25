# 0x11. C - printf
Foundations - Low-level programming & Algorithm ― Hatching out
by Julien Barbier, co-founder at Holberton School.

* Write your own `printf` function.

## Getting Started

* Allowed editors: vi, vim, emacs.
* All your files will be compiled on Ubuntu 14.04 LTS.
* Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic.
* All your files should end with a new line.
* A README.md file, at the root of the folder of the project is mandatory.
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl.
* You are not allowed to use global variables.
* No more than 5 functions per file.
* In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples.
* The prototypes of all your functions and the prototype of the function \_putchar should be included in your header file called holberton.h.
* Don’t forget to push your header file.
* All your header files should be include guarded.
* Note that we will not provide the\_putchar function for this project

### More Info
## Authorized functions and macros
* write (man 2 write)
* malloc (man 3 malloc)
* free (man 3 free)
* va_start (man 3 va_start)
* va_end (man 3 va_end)
* va_copy (man 3 va_copy)
* va_arg (man 3 va_arg)

## Compilation
* Your code will be compiled this way:
```
$ gcc -Wall -Werror -Wextra -pedantic *.c
```
* As a consequence, be careful not to push any c file containing a main function in the root directory of your project (you could have a test folder containing all your tests files including main functions)
Our main files will include your main header file (holberton.h): #include holberton.h
You might want to look at the gcc flag -Wno-format when testing with your /_printf and the standard printf. Example of test file that you could use:
```
alex@ubuntu:~/c/printf$ cat main.c 
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
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    return (0);
}
alex@ubuntu:~/c/printf$ gcc -Wall -Wextra -Werror -pedantic -Wno-format *.c
alex@ubuntu:~/c/printf$ ./printf
Let's try to printf a simple sentence.
Let's try to printf a simple sentence.
Length:[39, 39]
Length:[39, 39]
Negative:[-762534]
Negative:[-762534]
Unsigned:[2147484671]
Unsigned:[2147484671]
Unsigned octal:[20000001777]
Unsigned octal:[20000001777]
Unsigned hexadecimal:[800003ff, 800003FF]
Unsigned hexadecimal:[800003ff, 800003FF]
Character:[H]
Character:[H]
String:[I am a string !]
String:[I am a string !]
Address:[0x7ffe637541f0]
Address:[0x7ffe637541f0]
Percent:[%]
Percent:[%]
Len:[12]
Len:[12]
Unknown:[%r]
Unknown:[%r]
alex@ubuntu:~/c/printf$
```
* We strongly encourage you to work all together on a set of tests
* If the task does not specify what to do with an edge case, do the same as printf

### Workshop Development
## Tasks
### [0. Beauty is variable, ugliness is constant](./0-sum_them_all.c)
## Write a function that returns the sum of all its parameters.
* Prototype: int sum_them_all(const unsigned int n, ...);
* If n == 0, return 0
```
```

### [1. To be is to be the value of a variable](./1-print_numbers.c)
## Write a function that prints numbers, followed by a new line.
* Prototype: void print_numbers(const char *separator, const unsigned int n, ...);
* where separator is the string to be printed between numbers
* and n is the number of integers passed to the function
* You are allowed to use printf
* If separator is NULL, don’t print it
* Print a new line at the end of your function
```
```

### [2. One woman's constant is another woman's variable](./2-print_strings.c)
## Write a function that print strings, followed by a new line.
* Prototype: void print_strings(const char *separator, const unsigned int n, ...);
* where separator is the string to be printed between the strings
* and n is the number of strings passed to the function
* You are allowed to use printf
* If separator is NULL, don’t print it
* If one of the string is NULL, print (nil) instead
* Print a new line at the end of your function
```
```
### [3. To be is a to be the value of a variable](./3-print_all.c)
## Write a function that prints anything.

* Prototype: void print_all(const char * const format, ...);
* where format is a list of types of arguments passed to the function
* * c: char
* * i: integer
* * f: float
* * s: char * (if the string is NULL, print (nil) instead
* * any other char should be ignored
* * see example
* You are not allowed to use for, goto, ternary operator, else, do ... while
* You can use a maximum of
* * 2 while loops
* * 2 if
* You can declare a maximum of 9 variables
* You are allowed to use printf
* Print a new line at the end of your function

### [4. Real programmers can write assembly code in any language](./100-hello_holberton.asm)
```
```
## Authors

* **Camilo Bayona** - *Initial work* - [cbayonao](https://github.com/cbayonao)
* **Cristiam Camilo Baquero** - *Initial work* - [camilooob](https://github.com/camilooob)

## Acknowledgments

* Follow the framework
* Hat tip to anyone whose code was used
* Inspiration
* etc
