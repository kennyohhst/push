/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_new_head.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: code <code@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 18:15:24 by code              #+#    #+#             */
/*   Updated: 2022/11/11 16:01:59 by code             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_new_head(t_stack **list, int count)
{
	(*list) = (*list)->head;
	if (count == 1)
		(*list) = ft_swap_a((*list));
	if (count == 2)
	{
		(*list) = ft_rotate_a((*list));
		(*list) = ft_swap_a((*list));
	}
	if (count == 3)
		(*list) = ft_reverse_rotate_a((*list));
	return ((*list));
}