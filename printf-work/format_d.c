#include "main.h"

/**
 * handle_d_fmt - prints number in decimal form
 * @ap_d: int to be printed, passed as variadic argument
 *
 * Return: length of printed string
 */

int handle_d_fmt(va_list ap_d)
{
	int i, arg_int;
	static const char mod[] = "0123456789";
	static char buff[50];
	char *pt;
	int count = 0;

	arg_int = va_arg(ap_d, int);

	pt = &buff[49];
	*pt = '\0';

	if (arg_int < 0)
	{
		_putchar('-');
		arg_int = -arg_int;
		count++;
	}

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
