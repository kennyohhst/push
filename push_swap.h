/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: code <code@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 15:22:55 by code              #+#    #+#             */
/*   Updated: 2022/12/09 17:06:25 by code             ###   ########.fr       */
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
# include <limits.h>

//	STRUCT FOR LINKED LIST

typedef struct list
{
	int			num;
	int			index;
	struct list	*next;
}t_stack;

//	FUNCTIONS NEEDED FOR PUSH_SWAP

char		**ft_split(char const *s, char c);
char		*ft_substr(char const *s, unsigned int start, size_t len);
size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t		ft_strlen(const char *s);
char		*ft_strdup(const char *s1);
void		*ft_memcpy(void *dst, const void *src, size_t n);
void		ft_numcheck(char *str);
int			ft_atoi(const char *str);
long		ft_atoi_l(const char *str);
t_stack		*ft_parse_q(t_stack *list, char **argv);
t_stack		*ft_parse(t_stack *list, char **argv);
int			ft_grab_num(char *str);
void		ft_check_double(t_stack *list);
void		ft_add_nodes(int num, t_stack **list, t_stack *temp);
void		ft_indexing(t_stack *list);
void		ft_free_s(char **string);
void		ft_free_list(t_stack *list);
t_stack		*ft_swap_a(t_stack *list);
t_stack		*ft_rotate_a(t_stack	*list);
t_stack		*ft_reverse_rotate_a(t_stack	*list);
void		ft_push_a(t_stack **src, t_stack **dst);
void		ft_push_b(t_stack **src, t_stack **dst);
int			ft_length_list(t_stack *list);
void		ft_lowest(t_stack **list);
int			ft_highest(t_stack **list);
void		ft_sort(t_stack **a, t_stack **b);
int			ft_check_sort(t_stack *list);
t_stack		*ft_sort_two(t_stack *list);
t_stack		*ft_sort_three(t_stack *list);
void		ft_sort_four(t_stack **a, t_stack**b);
void		ft_sort_five(t_stack **a, t_stack **b);
void		ft_sort_big(t_stack **a, t_stack **b);

#endif