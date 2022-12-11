/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: code <code@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 16:46:37 by code              #+#    #+#             */
/*   Updated: 2022/12/09 16:33:31 by code             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort(t_stack **a, t_stack **b)
{
	while (!ft_check_sort((*a)))
	{
		if (ft_length_list((*a)) == 2)
			(*a) = ft_sort_two((*a));
		if (ft_length_list((*a)) == 3)
			(*a) = ft_sort_three((*a));
		if (ft_length_list((*a)) == 4)
			ft_sort_four(a, b);
		if (ft_length_list((*a)) == 5)
			ft_sort_five(a, b);
		if (ft_length_list((*a)) > 5)
			ft_sort_big(a, b);
	}
}
