#include "main.h"
/**
 * op_char - main function
 * @p: The argument pointer.
 *
 * Description: This function prints a char.
 *
 * Return: 1.
 */
 int op_char(va_list p)
 {
	int container = (char)va_arg(p, int);

	 _putchar(container);

	 return (1);
}
