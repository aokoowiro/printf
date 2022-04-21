#ifndef _MAIN_
#define _MAIN_


#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct form - Types.
 * @c: Types in c.
 * @f: Corresponding function.
 * 
 **/
typedef struct form
{
  char *c;
  int (*f)(va_list);
} 
type_printer;


int (*printer(char formati))(va_list);
int _printf(const char *format, ...);
int _putchar(char c);
int print_c(va_list arg);
int print_x(va_list arg);
int print_X(va_list arg);
int print_i(va_list arg);
void *conv_b(unsigned int nb);
void *conv_o(char *tab);
int print_o(va_list arg);
int print_p(va_list arg);
int print_r(va_list arg);
int print_rot13(va_list arg);
int print_s(va_list arg);
int print_S(va_list arg);
int print_u(va_list arg);
int print_b(va_list arg);
#endif
