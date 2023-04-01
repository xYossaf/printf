#include "main.h"

/**
 * p_int - Prints an integer
 * @list: list of arguments
 * Return: Will return the amount of characters printed.
 */

int p_int(va_list list)
{
	int num_length;

	num_length = p_num(list);
	return (num_length);
}


/**
 * p_num - prints a number send to this function
 * @args: List of arguments
 * Return: The number of arguments printed
 */

int p_num(va_list args)
{
	int n;
	int div;
	int len;
	unsigned int num;

	n  = va_arg(args, int);
	div = 1;
	len = 0;

	if (n < 0)
	{
		len += _putchar('-');
		num = n * -1;
	}
	else
		num = n;

	for (; num / div > 9; )
		div *= 10;

	for (; div != 0; )
	{
		len += _putchar('0' + num / div);
		num %= div;
		div /= 10;
	}

	return (len);
}
