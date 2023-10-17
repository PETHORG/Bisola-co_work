#include "main.h"

/**
 * handle_o_fmt - prints number in octal form
 * @ap_o: int to be printed, passed as a variadic argument
 *
 * Return: length of printed string
 */

int handle_o_fmt(va_list ap_o)
{
	unsigned int i, arg_int;
	static const char mod[] = "0123456789";
	static char buff[50];
	char *pt;
	int count = 0;

	arg_int = va_arg(ap_o, unsigned int);

	pt = &buff[49];
	*pt = '\0';
	while (arg_int != 0)
	{
		--pt;
		*pt = mod[arg_int % 8];
		arg_int /= 8;
		count++;
	}

	for (i = 0; pt[i] != '\0'; i++)
	{
		_putchar(pt[i]);
	}
	return (count);
}
