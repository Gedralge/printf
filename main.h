#ifndef PRINTF_F
#define PRINTF_F

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct convert - defines a structure for symbols and functions
 * @sysm: The operator
 * @f : the function associated
 */

struct convert
{
	char *sysm;
	int (*f)(va_list);
};
typedef struct convert conver_t;

/* Main functions*/
int parser(const char *format, conver_t f_list[], va_list arg_list);
int printf(const char *format, ...);
int write_char(va_list);
int print_char(va_list);
int print_string(va_list);
int print_percent(va_list);
int print_integer(va_list);
int print_number(va_list);
int print_binary(va_list);
int print_reverse(va_list arg);
int rot13(va_list);
int unsigned integer(va_list);
int print_octal(va_list list);
int print_hex(va_list list);

/* Helper functions*/
unsigned int base_len(unsigned int, int);
char *rev_string(char *);
void write_base(char *str);
		char *_memcpy(char *dest, char *src, unsigned int n);
		int print_unsigned_number(unsigned int);


#endif
