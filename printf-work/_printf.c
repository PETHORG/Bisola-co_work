#include "main.h"


int _printf(char *format, ...)
{
	int span = 0, i = 0, x, y;
	va_list var_p;
	char a;

	data_t methods[1] = {
		{{'r', 'd', 'p', 'u', 's',
			'o', 'x', 'X', 'b',
			'i', 'c', 'R', '\0', ' '}, call_fmt_function},
	};

	if (format == NULL)
		return (-1);

	va_start(var_p, format);

	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			i++;
			span++;
			continue;
		}
		else
		{
			a = format[i + 1];
			if (a == '%')
			{
				_putchar('%');
				span++;
				i += 2;
				continue;
			}
			else
			{
				for (x = 0; x < 1; x++)
				{
					for (y = 0; y < 14; y++)
					{
						if (methods[x].key[y] == a)
						{
							span += methods[x].f_pt(var_p, &a);
							i += 2;
							continue;
						}
					}
				}
			}
		}
	}
	return (span);
	va_end(var_p);
}
