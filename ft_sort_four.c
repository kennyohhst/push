/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_four.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: code <code@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 16:15:35 by code              #+#    #+#             */
/*   Updated: 2022/12/08 20:03:48 by code             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_four(t_stack **a, t_stack**b)
{
	if (ft_highest(a))
		(*a) = ft_rotate_a((*a));
	if (ft_check_sort((*a)))
		return ;
	ft_lowest(a);
	if (ft_check_sort((*a)))
		return ;
	ft_push_b(a, b);
	ft_sort(a, b);
	ft_push_a(b, a);
}
