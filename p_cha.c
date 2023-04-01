#include "main.h"

/**
 * p_cha - Prints character
 * @list: list of arguments
 * Return: Will return the amount of characters printed.
 */

int p_cha(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}
