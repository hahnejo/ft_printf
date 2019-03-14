//
// Created by Hahn Jo on 2019-02-12.
//

#include "ft_printf.h"

// not doing buffer management == not repeating the behavior of sprintf

// %[flags][width][.precision][length]specifier

// in after_mod, I want to get conversion
// check conversion and check mark the conversion so we know what conversion we have

void    parse_flags(char c, t_conv_info *info)
{
    c == 'c' ? info->current_conv = c_FLAG : 0;
    c == 's' ? info->current_conv = s_FLAG : 0;
    c == 'p' ? info->current_conv = p_FLAG : 0;
    c == 'd' ? info->current_conv = d_FLAG : 0;
    c == 'i' ? info->current_conv = i_FLAG : 0;
    c == 'o' ? info->current_conv = o_FLAG : 0;
    c == 'u' ? info->current_conv = u_FLAG : 0;
    c == 'x' ? info->current_conv = x_FLAG : 0;
    c == 'X' ? info->current_conv = X_FLAG : 0;

}

int     dictatef(const char *format, va_list ap, t_conv_info *info)
{
    int i;
    int j;
    char *new_str;

    i = 0;
    while (format[i])
    {
        if (format[i] != '%')
            ft_putchar(format[i]);
        else
        {
            i++;
            while (format[i] != '%' || format[i])
            {
                if (parse_flags(format[i], info))
                    
            }
        }
        i++;
        // print out everything before you see percent.
        // if you see percent, then need to gather information.
            // such as flags, width, precision, length, and specifiers

    }
    return (i);
}

//if (format[i] != '%')
//ft_putchar(format[i]);
//else {
//i++;
//while (format[i] && format[i] != '%') {
//if (ft_isalpha(format[i]) == 1)
//ft_putchar((format[i]));
//i++;
//}
//}
//
//ft_putchar(format[i]);
//i++;

int     ft_printf(const char *format, ...)
{
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
    int num = 1;

    printf("%d %d %d %d %d %d %d %d\n",c_FLAG, s_FLAG, p_FLAG, d_FLAG, i_FLAG, o_FLAG, u_FLAG, x_FLAG);
    ft_printf("hello%d\n", num);
//    printf("%d\n", ft_printf("hello%"));
    return (0);
}