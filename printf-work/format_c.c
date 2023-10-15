#include "main.h"

/**
 * handle_c_fmt - prints a character
 * @ap_c: char to be printed, passed as variadic argument
 *
 * Return: length of a char, that is (1)
 */

int handle_c_fmt(va_list ap_c)
{
	char chrct = (char)va_arg(ap_c, int);

	_putchar(chrct);
	return (1);
}
