/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_small_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: code <code@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:09:01 by code              #+#    #+#             */
/*   Updated: 2022/11/11 16:01:59 by code             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_small_sort(t_stack *list)
{
	if (list->num > list->next->num && list->next->num > list->prev->num)
	{
		list = ft_swap_a(list);
		return (ft_reverse_rotate_a(list));
	}
	if (list->num < list->next->num && list->num < list->prev->num)
	{
		list = ft_reverse_rotate_a(list);
		return (ft_swap_a(list));
	}
	if (list->num > list->next->num && list->num > list->prev->num)
		return (ft_rotate_a(list));
	if (list->num > list->next->num && list->num < list->prev->num)
		return (ft_swap_a(list));
	if (list->num < list->next->num && list->num > list->prev->num)
		return (ft_reverse_rotate_a(list));
	return (list);
}
