//
// Created by Hahn Jo on 2019-02-12.
//

#ifndef FT_PRINTF_FLAGS_H
#define FT_PRINTF_FLAGS_H

// o - octal
// x - unsigned hexadecimal int
// X - Unsigned hexadecimal integer (capital letters)

typedef enum {
    c_FLAG = 1 << 0,
    s_FLAG = 1 << 1,
    p_FLAG = 1 << 2,
    d_FLAG = 1 << 3,
    i_FLAG = 1 << 4,
    o_FLAG = 1 << 5,
    u_FLAG = 1 << 6,
    x_FLAG = 1 << 7,
    X_FLAG = 1 << 8,
    f_FLAG = 1 << 9,
    h_FLAG = 1 << 10,
    l_FLAG = 1 << 11,
    ll_FLAG = 1 << 12,
    lh_FLAG = 1 << 13,
}           t_conversions;

#endif //FT_PRINTF_FLAGS_H
