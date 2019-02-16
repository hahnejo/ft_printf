//
// Created by Hahn Jo on 2019-02-12.
//

#include <stdio.h>
#include <stdarg.h>
#include "libft.h"
#include "flags.h"

// not doing buffer management == not repeating the behavior of sprintf

// %[flags][width][.precision][length]specifier

//    while (format[i] != '%') {
//        ft_putchar(format[i]);
//        i++;
//    }

// in after_mod, I want to get conversion
// check conversion and check mark the conversion so we know what conversion we have
//

void    before_specifier(char *conv, t_conv_info *info) {
    int i;

    i = 0;
    while (ft_isalpha(conv[i]) != 1)
    {
        i++;
    }
    if (conv[i] == 'l') {
        if (conv[i + 1] == 'l')
            info->current_conv == ll_FLAG;
        if (conv[i] == 'l' && conv[i + 1] == 'l'
            info->current_conv == l_FLAG;
    }
}

int     dictatef(const char *format, va_list ap, t_conv_info *info)
{
    int i;
    i = 0;
    while (format[i])
    {
        if (format[i] == '%')
            before_specifier(format + (i + 1), info);
        ft_putchar(format[i]);
        i++;
    }

    return (i);
}

int     ft_printf(const char *format, ...) {
    int ans;
    va_list ap;
    t_conv_info info;

    va_start(ap, format);
    ans = dictatef(format, ap, &info);
    va_end(ap);
    return (ans);
}

// read format string
int     main()
{
    ft_printf("hello%");
    printf("%d\n", ft_printf("hello%"));
    return (0);
}