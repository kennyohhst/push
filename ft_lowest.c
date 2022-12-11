/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lowest.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: code <code@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 17:35:36 by code              #+#    #+#             */
/*   Updated: 2022/12/03 19:32:49 by code             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_set_low_front(int i, t_stack **list)
{
	if (i == 2)
		(*list) = ft_swap_a((*list));
	if (i == 3)
	{
		(*list) = ft_rotate_a((*list));
		(*list) = ft_rotate_a((*list));
	}
	if (i == 4 && ft_length_list((*list)) == 4)
		(*list) = ft_reverse_rotate_a((*list));
	else if (i == 4 && ft_length_list((*list)) == 5)
	{
		(*list) = ft_reverse_rotate_a((*list));
		(*list) = ft_reverse_rotate_a((*list));
	}
	if (i == 5)
		(*list) = ft_reverse_rotate_a((*list));
}

void	ft_lowest(t_stack **list)
{
	t_stack	*temp;
	t_stack	*first;
	int		i;
	int		x;

	i = 1;
	x = 0;
	first = (*list);
	temp = (*list)->next;
	while (temp && (*list))
	{
		x++;
		if ((*list)->index < temp->index)
			temp = temp->next;
		else if (temp && (*list))
		{
			i += x;
			x = 0;
			(*list) = temp;
			temp = temp->next;
		}
	}
	(*list) = first;
	ft_set_low_front(i, list);
}
