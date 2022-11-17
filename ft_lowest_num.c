/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lowest_num.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: code <code@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:25:22 by code              #+#    #+#             */
/*   Updated: 2022/11/11 16:01:59 by code             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lowest_num(t_stack **list)
{
	int	temp;
	int	count;
	
	count = 0;
	temp = (*list)->num;
	(*list) = (*list)->next;
	while (!(*list)->tail)
	{
		if (temp > (*list)->num)
		{
			temp = (*list)->num;
			count++;
		}
		(*list) = (*list)->next;
	}
	if (temp > (*list)->num)
	{
		ft_reverse_rotate_a((*list)->head);
		// temp = (*list)->num;
		// count++;
	}
	else
	ft_new_head(list, count);
	// (*list) = (*list)->head;
}
