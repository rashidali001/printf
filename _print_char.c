#include "main.h"

/**
 * _print_char - entry point
 * @args: list
 *
 * Return: no of arguments
 */
int _print_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}
