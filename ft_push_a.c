/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: code <code@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 19:34:09 by code              #+#    #+#             */
/*   Updated: 2022/11/11 16:01:59 by code             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_push_a(t_stack **list_a, t_stack **list_b)
{
	t_stack	*temp;

	temp = malloc(sizeof(t_stack));
	if (!temp)
		exit(write(1, "Error", 5));
	if (ft_length_list((*list_b)) > 1)
		temp = (*list_b)->next;
	(*list_b)->next = (*list_a)->head;
	(*list_b)->prev = (*list_a)->head->prev;
	(*list_a)->prev = (*list_b);
	(*list_a) = (*list_a)->prev;
	(*list_a)->prev->next = (*list_a);
	(*list_a)->tail = 0;
	while (!(*list_a)->tail)
	{
		(*list_a) = (*list_a)->next;
		(*list_a)->head = (*list_a)->prev->head;
	}
	(*list_a) = (*list_a)->head;
	write(1, "pa", 2);
	write(1, "\n", 1);
	return (temp);
}
