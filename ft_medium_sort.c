/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_medium_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: code <code@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 17:15:22 by code              #+#    #+#             */
/*   Updated: 2022/11/15 19:28:44 by code             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_medium_sort(t_stack *stack_a, t_stack *stack_b)
{
	ft_lowest_num(&stack_a);
	if (ft_check_sort(stack_a))
		return (stack_a);
	stack_b = ft_push_b(&stack_a);
	stack_a = ft_small_sort(stack_a);
	stack_b = ft_push_a(&stack_a, &stack_b);
	return (stack_a);
}
