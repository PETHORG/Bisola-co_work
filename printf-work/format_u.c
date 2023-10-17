#include "main.h"

/**
 * handle_u_fmt - prints an unsigned integer
 * @ap_u: unsigned int to printed, passed as variadic argument
 *
 * Return: length of printed string
 */

int handle_u_fmt(va_list ap_u)
{
	unsigned int i, arg_int;
	static const char mod[] = "0123456789";
	static char buff[50];
	char *pt;
	int count = 0;

	arg_int = va_arg(ap_u, unsigned int);

	pt = &buff[49];
	*pt = '\0';

	while (arg_int != 0)
	{
		--pt;
		*pt = mod[arg_int % 10];
		arg_int /= 10;
		count++;
	}

	for (i = 0; pt[i] != '\0'; i++)
	{
		_putchar(pt[i]);
	}
	return (count);
}
