#include "main.h"


int (*check_specifier(char *format))(va_list, char *)
{
	int i = 0, j = 0;

	data_t methods[2] = {
		{{'c', 'd', 'i', 'u', 'o', 'x', 'X', 'b', 'p', 'r', 'R', '\0'}, call_fmt_function},

		{{'s', '\0'}, handle_s_fmt}
	};
	/* Also soon i would try a new approach of code, where array of function pointer is used and these array contains functions*/

	while (i < 2)
	{
		while (methods[i].key[j] != '\0')
		if (methods[i].key[j] == *format)
			break;
	}
	return (methods.f_pt);
}
