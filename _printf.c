#include "main.h"

/**
 * _printf - to
 * print a formated string
 * @format: A string
 * Return: count of the characters printed
 */

int _printf(const char *format, ...)
{
	int printed_chars;
	conver_t f_list[] = {
		{"%", p_per},
		{"d", p_int},
		{"i", p_int},
		{"c", p_cha},
		{"s", p_str},
		{NULL, NULL},
	};
	va_list arg_list;

	if (format == NULL)
		return (-1);

	va_start(arg_list, format);
	printed_chars = handler(format, f_list, arg_list);
	va_end(arg_list);
	return (printed_chars);
}
