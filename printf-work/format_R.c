#include "main.h"

/**
 * handle_R_fmt - prints a string(text) in rot13 format
 * @ap_R: string to print, passed as variadic argunents
 *
 * Return: length of printed string
 */

int handle_R_fmt(va_list ap_R)
{
	char *txt;
	unsigned int i, j;
	int count = 0;
	char a[53] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[53] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	txt = va_arg(ap_R, char *);

	if (txt == NULL)
		txt = "(ahyy)";

	for (i = 0; txt[i]; i++)
	{
		for (j = 0; a[j]; j++)
		{
			if (a[j] == txt[i])
			{
				_putchar(b[j]);
				count++;
				break;
			}
		}
		if (!a[j])
		{
			_putchar(txt[i]);
			count++;
		}
	}
	return (count);
}
