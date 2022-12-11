/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_big.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: code <code@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 19:34:34 by code              #+#    #+#             */
/*   Updated: 2022/12/08 20:18:22 by code             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_big(t_stack **a, t_stack **b)
{
	int		bit;
	int		length;

	bit = 1;
	while (!ft_check_sort((*a)))
	{
		length = ft_length_list((*a));
		while (length)
		{
			if ((*a)->index & bit)
				(*a) = ft_rotate_a((*a));
			else
				ft_push_b(a, b);
			length--;
		}
		bit <<= 1;
		while ((*b))
			ft_push_a(b, a);
	}
}
