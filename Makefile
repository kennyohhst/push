NAME = push_swap.a
FLAGS = -g -Wall -Werror -Wextra #-fsanitize=address
SRC = ft_numcheck.c ft_grab_num.c ft_free.c ft_parsing.c ft_add_nodes.c ft_atoi.c ft_atoi_l.c \
		ft_check_double.c ft_check_sort.c ft_small_sort.c ft_swap_a.c ft_rotate_a.c \
		ft_reverse_rotate_a.c ft_medium_sort.c ft_length_list.c ft_circular_doubly.c \
		ft_lowest_num.c ft_sort.c ft_remove_node.c ft_push_b.c ft_push_a.c ft_new_head.c \
		ft_split.c ft_substr.c ft_strlcpy.c ft_strlen.c ft_strdup.c ft_memcpy.c \
		ft_strncmp.c ft_free_s.c ft_free_list.c
		
HEAD = push_swap.h
OBJ = $(SRC:.c=.o)

all: $(NAME)
	gcc $(FLAGS) main.c push_swap.a -o push_swap

$(OBJ):
	gcc -c $(FLAGS) $(SRC)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -rf $(NAME) push_swap

re: fclean all
	
.PHONY: clean fclean re all