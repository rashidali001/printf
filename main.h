#ifndef _MAIN_H
#define _MAIN_H	

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>


typedef struct print
{
	char *type_arg;
	int (*f)(va_list, char *, unsigned int);
}print_t;


int _printf(const char *format, ...);
int print_prg(va_list __attribute__((unused)), char *, unsigned int);
int print_chr(va_list arguments, char *buf, unsigned int ibuf);
int print_str(va_list arguments, char *buf, unsigned int ibuf);

#endif
