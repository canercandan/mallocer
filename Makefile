SRC		=	malloc.c \
			free.c \
			realloc.c \
			calloc.c \
			show_alloc_mem.c \
			add_blk.c \
			mem_set.c \
			get_available.c \
			get_allocated_blk.c \
			init_blk_list.c \
			sup_power.c \
			conv_10_to_16.c \
			get_blk_size.c \
			my_strlen.c \
			my_putchar.c \
			my_putnbr.c \
			my_putstr.c \
			my_power.c \
			my_revstr.c

NAME		=	libmy_malloc_$(HOSTTYPE).so

OBJ		=	$(SRC:.c=.o)

CC		=	gcc

INCLUDES	=	-I.

CFLAGS		=	-Wall $(INCLUDES)

$(NAME): $(OBJ)
	$(CC) -shared $(SRC) -o $(NAME)

all: $(NAME)

clean:
	rm -rf *.o
	rm -rf *~
	rm -rf *#

fclean: clean
	rm -rf $(NAME)

re: fclean all
