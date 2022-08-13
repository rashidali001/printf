#include "main.h"

#include "main.h"

/**
 * _puts - Prints a string, followed by a new line, to stdout
 * @str: The string
 *
 * Return: number of characters printed
 */
int _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}

/**
 * _print_string - entry
 * @args: list
 *
 * Return:integer
 */
int _print_string(va_list args)
{
	return (_puts(va_arg(args, char *)));

}
