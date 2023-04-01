#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct convert - define structure
 *
 * @sym: operator
 * @f: function associated
 */

struct convert
{
	char *sym;
	int (*f)(va_list);
};
typedef struct convert conver_t;

int _printf(const char *format, ...);
int _putchar(char c);
int handler(const char *format, conver_t f_list[], va_list arg_list);
int p_per(va_list);
int p_int(va_list);
int p_cha(va_list);
int p_str(va_list);
int p_num(va_list args);
#endif
