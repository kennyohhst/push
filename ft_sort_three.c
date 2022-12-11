/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_small_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: code <code@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:09:01 by code              #+#    #+#             */
/*   Updated: 2022/12/09 16:31:03 by code             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_sort_three(t_stack *list)
{
	if (list->index > list->next->index
		&& list->next->index > list->next->next->index)
	{
		list = ft_swap_a(list);
		return (ft_reverse_rotate_a(list));
	}
	if (list->index < list->next->index
		&& list->index < list->next->next->index)
	{
		list = ft_reverse_rotate_a(list);
		return (ft_swap_a(list));
	}
	if (list->index > list->next->index
		&& list->index > list->next->next->index)
		return (ft_rotate_a(list));
	if (list->index > list->next->index
		&& list->next->index < list->next->next->index)
		return (ft_swap_a(list));
	if (list->index < list->next->index
		&& list->index > list->next->next->index)
		return (ft_reverse_rotate_a(list));
	return (list);
}
