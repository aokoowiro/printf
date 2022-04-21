#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
/**
 * print_s - Print a string.
 * @arg: String address.
 * Return: integer.
 */
int print_s(va_list arg)
{
    int i = 0;
    char *s;
  
  s = va_arg(arg, char *);
  
  if (s == NULL)
  {
      s = "(null)";
  }
  
  while (s[i] != '\0')
  {
    _putchar(s[i]);
    i++;
  }
return (i);
}
