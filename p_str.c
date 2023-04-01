#include "main.h"

/**
 * p_str - Prints a string
 * @list: list of arguments
 * Return: Will return the amount of characters printed.
 */

int p_str(va_list list)
{
	int i;
	char *str;

	str = va_arg(list, char *);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}
