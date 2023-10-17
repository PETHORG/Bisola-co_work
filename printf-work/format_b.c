#include "main.h"

/**
 * handle_b_fmt - prints number in binary form
 * @ap_b: int to be converted, passed as variadic argument
 *
 * Return: length of printed string
 */

int handle_b_fmt(va_list ap_b)
{
	unsigned int i, arg_int;
	static const char mod[] = "0123456789";
	static char buff[50];
	char *pt;
	int count = 0;

	arg_int = va_arg(ap_b, unsigned int);

	pt = &buff[49];
	*pt = '\0';

	while (arg_int != 0)
	{
		--pt;
		*pt = mod[arg_int % 2];
		arg_int /= 2;
		count++;
	}

	for (i = 0; pt[i] != '\0'; i++)
	{
		_putchar(pt[i]);
	}
	return (count);
}
