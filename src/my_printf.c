//
// Created by Hahn Jo on 2019-02-12.
//

#include <stdio.h>
#include <stdarg.h>
#include "libft.h"

// not doing buffer management == not repeating the behavior of sprintf
// %[flags][width][.precision][length]specifier

//    while (format[i] != '%') {
//        ft_putchar(format[i]);
//        i++;
//    }
//
//    if (format[i] == '%' && format[i + 1] == '%')
//        ft_putchar('%');

int     dictatef(const char *format, va_list ap)
{
    int i;
    i = 0;
    while (format[i] != '%') {
        ft_putchar(format[i]);
        i++;
}

int     ft_printf(const char *format, ...) {
    int i = 0;
    int ans;
    char output;
    va_list ap;

    va_start(ap, format);
    ans = dictatef(format, ap);
    va_end(ap);
    return (ans);
}

// read format string
int     main()
{
    ft_printf("hello");
    return (0);
}