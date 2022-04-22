#ifndef _PRINTF_H_
#define _PRINTF_H_

/* Libraries */
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * struct convert - defines a structure for symbols and functions
 *
 * @sym: The operator.
 * @f: the function associated.
 */
typedef struct base
{
<<<<<<< HEAD
  char *op;
  int (*f)(va_list p);
=======
	char *op;
	int (*f)(va_list p);
>>>>>>> a198ade88eb014823f3c67e33d437979d4c14536
} base_t;

/* General Prototypes */
int _printf(const char *format, ...);
int selector(int *i, const char *format, va_list x);

/* Basic Prototypes */
int op_char(va_list p);
int op_string(va_list p);
int op_percent(va_list _ _attribute_ _((unused)) p);
int op_numbers(va_list arg);

/* Advanced Prototypes */
int op_unsigned(va_list arg);
int op_octal(va_list p);
int op_binary(va_list p);
int print_rev(va_list p);
int rot13(va_list p);

/* Auxiliar Prototypes */
int _putchar(char c);

#endif
