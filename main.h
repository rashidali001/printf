#ifndef MAIN_H
<<<<<<< HEAD

#define MAIN_H

#include <stdarg.h>

#include <stdlib.h>


/**
 *
 *  * struct printer - structure for printing to stdout, given a specifier
 *
 *   * @specifier: the specifier recognized by this printer (without the %)
 *
 *    * @run: the function to run when this printer is invoked
 *
 *     */
typedef struct printer
{
	char *specifier;
	int (*run)(va_list);
} printer;

printer _get_printer(const char *specifier);

int _putchar(char c);

int _printf(const char *format, ...);

int _print_char(va_list);

int _print_str(va_list);

int _print_decimal(va_list);

int _print_int(va_list);

int _print_binary(va_list);

int _print_str_nonprintable(va_list);

int _print_str_reverse(va_list);

int _print_rot13(va_list);

int _print_uint(va_list);

int _print_octal(va_list);

int _print_hex_lower(va_list);

int _print_hex_upper(va_list);

int _print_pointer(va_list);
=======
#define MAIN_H

#define END '\0'

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>



/**
 * struct format - struct
 * @id: operation selector
 * @meth: method
 */

typedef struct format
{
	char *id;
	int (*meth)();
} format_t;

int print_p(va_list params);
int print_S(va_list params);
int print_H(va_list params);
int print_h(va_list params);
int print_o(va_list params);
int print_u(va_list params);
int print_b(va_list params);
int print_r(va_list params);
int print_R(va_list params);
int print_i(va_list params);
int print_d(va_list params);
int print_c(va_list params);
int print_s(va_list params);
int print_a(void);
int print_h_aux(unsigned long int num);
int print_H_aux(unsigned int num);
int _strlen(char *s);
int _strlenc(const char *s);
int _putc(char c);
int _printf(const char *format, ...);
int rev_string(char *s);
int *_strcpy(char *dest, char *src);
>>>>>>> e59efad9d9345075c8ad88814ac4b3d2f839d658

#endif
