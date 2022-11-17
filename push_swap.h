/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkalika <kkalika@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 15:22:55 by code              #+#    #+#             */
/*   Updated: 2022/11/17 14:42:38 by kkalika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

//	LIBRARIES

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stddef.h>

//	STRUCT FOR LINKED LIST

typedef struct linked_list
{
	int					num;
	int					tail;
	struct linked_list	*next;
	struct linked_list	*prev;
	struct linked_list	*head;
}t_stack;

//	FUNCTIONS NEEDED FOR PUSH_SWAP

int			ft_grab_num(char *str);
void		ft_numcheck(char *str);
char		*ft_free(char *str);
t_stack		*ft_parsing(t_stack *list, char **argv);
t_stack		*ft_circular_doubly(t_stack *list);
void		ft_add_nodes(int num, t_stack **list);
int			ft_atoi(const char *str);
long		ft_atoi_l(const char *str);
int			ft_check_double(char **string);
int			ft_check_sort(t_stack *list);
t_stack		*ft_small_sort(t_stack *list);
t_stack		*ft_swap_a(t_stack *list);
t_stack		*ft_rotate_a(t_stack	*list);
t_stack		*ft_reverse_rotate_a(t_stack	*list);
t_stack		*ft_medium_sort(t_stack *list, t_stack *stack_b);
int			ft_length_list(t_stack *list);
void		ft_lowest_num(t_stack **list);
void		ft_sort(t_stack **stack_a, t_stack **stack_b);
void		ft_remove_node(t_stack *list, int num);
t_stack		*ft_push_b(t_stack **list_a);
t_stack		*ft_push_a(t_stack **list_a, t_stack **list_b);
t_stack		*ft_new_head(t_stack **list, int count);
char		**ft_split(char const *s, char c);
char		*ft_substr(char const *s, unsigned int start, size_t len);
size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t		ft_strlen(const char *s);
char		*ft_strdup(const char *s1);
void		*ft_memcpy(void *dst, const void *src, size_t n);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
void		ft_free_s(char **string);
void		ft_free_list(t_stack *list);


#endif