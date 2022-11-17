/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: code <code@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 16:46:37 by code              #+#    #+#             */
/*   Updated: 2022/11/15 19:17:34 by code             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort(t_stack **stack_a, t_stack **stack_b)
{
	while (!ft_check_sort((*stack_a)))
	{
		if (ft_length_list((*stack_a)) == 3)
			(*stack_a) = ft_small_sort((*stack_a));
		if (ft_length_list((*stack_a)) == 4)
		{
			(*stack_a) = ft_medium_sort((*stack_a), (*stack_b));			
		}
		else 
			return ;
	}	
}
