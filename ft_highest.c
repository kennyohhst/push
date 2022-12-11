/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_highest.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: code <code@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 17:53:41 by code              #+#    #+#             */
/*   Updated: 2022/12/05 19:33:39 by code             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_highest(t_stack **list)
{
	t_stack	*temp;

	temp = (*list);
	while ((*list)->next)
	{
		(*list) = (*list)->next;
		if (temp->index > (*list)->index)
		{
			if (ft_check_sort((*list)))
			{
				(*list) = temp;
				return (1);
			}
		}
		else
		{
			(*list) = temp;
			return (0);
		}
	}
	return (0);
}
