cmake_minimum_required(VERSION 3.6)
project(ft_printf)

set(CMAKE_CXX_STANDARD 11)

include_directories(dependencies/libft/include)

set(SOURCE_FILES
        src/write.c
        src/my_printf.c
        src/main.c
        src/flags.h src/ft_printf.h)

add_executable(ft_printf ${SOURCE_FILES})