#ifndef MAIN_H
#define MAIN_H


#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

typedef struct data{
	char key[13];
	int (*f_pt)(va_list, char*);
}data_t;

int _printf(char *format, ...);
int (*check_specifier(char *format))(va_list, char*);
int call_fmt_function(va_list var_p, char *format); 
int _putchar(char c);
int handle_c_fmt(va_list c);
int handle_s_fmt(va_list s);
int handle_d_fmt(va_list d);
int handle_u_fmt(va_list u);
int handle_b_fmt(va_list b);
int handle_o_fmt(va_list o);
int handle_x_fmt(va_list x);
int handle_X_fmt(va_list X);
int handle_p_fmt(va_list p);
int handle_S_fmt(va_list S);
int handle_r_fmt(va_list r);
int handle_R_fmt(va_list R);


#endif /*MAIN_H*/
