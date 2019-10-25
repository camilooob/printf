# 0x10. C - Variadic functions
Foundations - Low-level programming & Algorithm ― Hatching out
by Julien Barbier, co-founder at Holberton School.

* What are variadic functions
* How to use va_start, va_arg and va_end macros
* Why and how to use the const type qualifier


## Getting Started

* Allowed editors: vi, vim, emacs.
* All your files will be compiled on Ubuntu 14.04 LTS.
* Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic.
* All your files should end with a new line.
* A README.md file, at the root of the folder of the project is mandatory.
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl.
* You are not allowed to use global variables.
* No more than 5 functions per file.
* The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc… is forbidden.
* You are not allowed to use the standard library. Any use of functions like printf, puts, etc… is forbidden.
* You are allowed to use \_putchar.
* You don’t have to push \_putchar.c, we will use our file. If you do it won’t be taken into account.
* In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples.
* The prototypes of all your functions and the prototype of the function \_putchar should be included in your header file called holberton.h.
* Don’t forget to push your header file.
* All your header files should be include guarded.

### Workshop Development

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
