#ifndef PRINTF_FUNCTIONS_H_
#define PRINTF_FUNCTIONS_H_
#include <stdarg.h>
#include <stdlib.h>
/**
 * struct fmt_struct - format-type class/object/struct
 * @fmt_identifier: format identifier
 * @fmt_print_func: pointer to function that prints in the format of @format
 */

struct fmt_struct
{
	char fmt_identifier;
	int (*fmt_print_func)(va_list *arg_list);
};

typedef struct fmt_struct fmt_struct_data_type;

int _putchar(char c);
int _printf(const char *format, ...);
int print_unsigned(va_list *arg);
int print_oct(va_list *arg);
int print_hex_base(va_list arg, char _case);
int print_hex(va_list *arg);
int print_HEX(va_list *arg);
int print_rot13(va_list *y);
int print_rev(va_list *y);
int print_S(va_list *list);
int print_unsignedIntToHex(unsigned int num, char _case);
int (*get_fmt_func(char identifier))(va_list *);

int print_char(va_list *arg);
int print_percentage_and_char(char c);
int print_int(va_list *arg_list);
/* int print_float(va_list *arg); */
int print_string(va_list *arg);
int print_normal_char(char c);
int print_percentage(va_list *arg);
int print_binary(va_list *arg);

#endif /* #ifndef PRINTF_FUNCTIONS_H_ */
