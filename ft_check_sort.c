/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: code <code@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 16:58:25 by code              #+#    #+#             */
/*   Updated: 2022/12/03 16:31:46 by code             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_sort(t_stack *list)
{
	t_stack	*temp;

	temp = list;
	while (temp->next)
	{
		if (temp->next && temp->index < temp->next->index)
			temp = temp->next;
		else
			return (0);
	}
	return (1);
}
