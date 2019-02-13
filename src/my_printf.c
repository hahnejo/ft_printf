//
// Created by Hahn Jo on 2019-02-12.
//

#include <stdio.h>
#include <stdarg.h>
#include "libft.h"

// %[flags][width][.precision][length]specifier

int     dictatef(FILE *stream, const char *format, va_list arg) {

//    while (format[i] != '%') {
//        ft_putchar(format[i]);
//        i++;
//    }
//
//    if (format[i] == '%' && format[i + 1] == '%')
//        ft_putchar('%');
}

int     ft_printf(const char *format, ...) {
    int i = 0;
    char output;
    va_list ap;
    va_start(ap, format);
    int ans;

    va_start(ap, format);
    ans = dictatef(stdout, format, ap);
    va_end(ap);

    return (ans);
}

int     main()
{
    return (0);
}