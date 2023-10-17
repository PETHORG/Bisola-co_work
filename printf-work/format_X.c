#include "main.h"

/**
 * handle_X_fmt - prints numbers in hexadecimal form
 * @ap_X:  int to be converted, passed as variadic argunents
 *
 * Return: length of printed string
 */

int handle_X_fmt(va_list ap_X)
{
	unsigned int i, arg_int;
	static const char mod[] = "0123456789ABCDEF";
	static char buff[50];
	char *pt;
	int count = 0;

	arg_int = va_arg(ap_X, unsigned int);

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
