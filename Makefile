NAME = ft_printf
CC = gcc
CFLAG = -Wall -Wextra -Werror
SRC = $(wildcard src/*.c)
OBJ = $(patsubst src/%.c, obj/%.o, $(SRC))
LIBFT = dependencies/libft/libft.a
INCLUDES = -I dependencies/libft/include

all : $(NAME)

$(NAME) : object_folder dependencies $(OBJ) $(CC) $(CFLAG) $(INCLUDES) $(OBJ) $(LIBFT) -o $(NAME)

dependencies : $(LIBFT)

object_folder :
	mkdir obj

$(LIBFT) :
	-@ cd dependencies/libft && make

obj/%.o : src/%.c
	$(CC) $(CFLAGS) $(INCLUDES) -c -o $@ $<

clean :
	rm -rf obj
	rm -f $(NAME)
	make -C dependencies/libft/ clean

fclean :
	-@rm -f $(NAME)
	-@rm -rf obj
	-@cd dependencies/libft && make fclean
