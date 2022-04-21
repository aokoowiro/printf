#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * Description - prints unsigned integer function
 * @arg: integer to print
 * Return: number of integer printed
 */
int print_u(va_list arg)
{
unsigned int ar = va_arg(arg, int), count = 0;
unsigned int i, p, r;
  i = n;
  p = 1;
  r = i;
  
  while (r > 9)
  {
      p *= 10;
      r /=10;
  }
  
  for (; p >= 1; p /= 10)
  {
      _putchar(((i / p) % 10) + '0');
      count++;
  }
  return (count);
}
