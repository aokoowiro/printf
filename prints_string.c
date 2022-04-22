/**
 * op_string - main function
 * @p: The argument pointer.
 *
 * Description: This function prints a string.
 *
 * Return: The string length.
 */
int op_string(va_list p)
{
	int i = 0;
	char *s;

	s = va_arg(p, char*);

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
