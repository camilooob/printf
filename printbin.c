#include "holberton.h"

int printbin(char *format, va_list pa)
{
  int binarynum = 0;
  int rem, temp = 1;
  int num = va_arg(pa, int);
  
  while (num != 0)
  {
    rem = num % 2;
    num = num / 2;
    binarynum = binarynum + rem * temp;
    temp = temp * 10;
  }
  return binarynum;
}
