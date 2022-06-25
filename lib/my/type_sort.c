/*
** EPITECH PROJECT, 2021
** disp_stdarg prototype of my_printf
** File description:
** disp_stdarg
*/

#include <stdio.h>
#include <stdarg.h>
#include "../../include/my_printf.h"

void disp_stdarg(char *str, va_list ap)
{
    int i = 0;

    str += 1;
    if (*str == 's')
        my_putstr(va_arg(ap, char *));
    if (*str == 'd' || *str == 'i')
        my_put_nbr(va_arg(ap, long long int));
    if (*str == 'c')
        my_putchar(va_arg(ap, int));
    if (*str == 'o')
        my_putstr(base_to_octal(va_arg(ap, int)));
    if (*str == 'X')
        my_putstr(base_to_hex_upper(va_arg(ap, int)));
    if (*str == 'x')
        my_putstr(base_to_hex_lower(va_arg(ap, int)));
    if (*str == 'l' && str[i + 1] == 'd')
        my_put_nbr(va_arg(ap, long long int));
    if (*str == 'l' && str[i + 1] == 'l' && \
    (str[i + 2] == 'd' || str[i + 2] == 'i'))
        my_put_nbr(va_arg(ap, long long int));
    if (*str == 'b')
        my_putstr(base_to_binary(va_arg(ap, int)));
    va_end(ap);
}
