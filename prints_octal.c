/**
 * op_octal - main function
 * @p: The argument pointer.
 *
 * Description: This function prints a octal number.
 *
 * Return: The total number of chacarters.
 */
int op_octal(va_list p)
{
	unsigned int oct = va_arg(p, int), buff[1000];
	int count = 0, i;

	if (oct == 0)
	{
		_putchar('0');
		return (1);
	}

	while (oct > 0)
	{
		buff[count] = oct % 8;
		oct /= 8;
		count++;
	}
	for (i = count - 1; i >= 0; i--)
	{
		_putchar(buff[i] + '0');
	}
	return (count);
}
