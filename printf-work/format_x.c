#include "main.h"

/**
 * handle_x_fmt - prints numbers in lowercase hexadecimal form
 * @ap_x: int to be printed, passed as variadic argument
 *
 * Return: length of printed string
 */

int handle_x_fmt(va_list ap_x)
{
	unsigned int i, arg_int;
	static const char mod[] = "0123456789abcdef";
	static char buff[50];
	char *pt;
	int count = 0;

	arg_int = va_arg(ap_x, unsigned int);

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
