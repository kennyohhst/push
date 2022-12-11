NAME = push_swap.a
FLAGS = -g -Wall -Werror -Wextra -fsanitize=address
SRC = ft_numcheck.c ft_grab_num.c ft_parse_q.c ft_add_nodes.c ft_atoi.c ft_atoi_l.c \
		ft_check_double.c ft_check_sort.c ft_sort_three.c ft_swap_a.c ft_rotate_a.c \
		ft_reverse_rotate_a.c ft_length_list.c ft_sort.c ft_split.c ft_substr.c \
		ft_strlcpy.c ft_strlen.c ft_strdup.c ft_memcpy.c ft_free_s.c \
		ft_free_list.c ft_parse.c ft_push_b.c ft_push_a.c ft_indexing.c ft_sort_two.c ft_lowest.c \
		ft_sort_four.c ft_sort_five.c ft_highest.c ft_sort_big.c
		
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