#include "main.h"

/**
 * handle_p_fmt - prints the address of variable in hexadecimal for
 * @ap_p: address to printed, passed as variadic argument
 *
 * Return: length of printed string
 */

int handle_p_fmt(va_list ap_p)
{
	unsigned long arg_int;
	unsigned int i;
	static const char mod[] = "0123456789abcdef";
	static char buff[50];
	char pt;
	int count = 0;

	arg_int = va_arg(ap_p, unsigned long);

	_putchar('0');
	_putchar('x');
	count = 2;

	pt = &buff[49];
	*pt = '\0';

	while (arg_int != 0)
	{
		--pt;
		*pt = mod[arg_int % 16];
		arg_int /= 16;
		count++;
	}
	for (i = 0; pt[i] != '\0'; i++)
	{
		_putchar(pt[i]);
	}
	return (count);
}
