#include "main.h"

/**
 * handle_s_fmt - prints string(text)
 * @ap_s: string to be printed, passed as variadic argument
 *
 * Return: length of printed string
 */

int handle_s_fmt(va_list ap_s)
{
	char *txt = va_arg(ap_s, char *);
	int i = 0, count = 0;

	if (txt == NULL)
		txt = "(null)";
	while (txt[i])
	{
		_putchar(txt[i++]);
		count++;
	}
	return (count);
}
