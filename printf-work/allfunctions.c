#include "main.h"


int call_fmt_function(va_list var_p, char *format)
{
	int span = 0;

	if (*format == 'c')
		span += handle_c_fmt(var_p);
	else if (*format == 's')
		span += handle_s_fmt(var_p);
	else if (*format == 'd' || *format == 'i')
		span += handle_d_fmt(var_p);
	else if (*format == 'b')
		span += handle_b_fmt(var_p);
	else if (*format == 'u')
		span += handle_u_fmt(var_p);
	else if (*format == 'o')
		span += handle_o_fmt(var_p);
	else if (*format == 'x')
		span += handle_x_fmt(var_p);
	else if (*format == 'X')
		span += handle_X_fmt(var_p);
	else if (*format == 'r')
		span += handle_r_fmt(var_p);
	else if (*format == 'R')
		span += handle_R_fmt(var_p);
	else if (*format == 'p')
		span += handle_p_fmt(var_p);
	else if (*format = ' ')
		return (-1);
	else if (*format = '\0')
		return (-1);

	return (span);

}
