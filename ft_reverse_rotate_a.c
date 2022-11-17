/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate_a.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: code <code@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 17:01:29 by code              #+#    #+#             */
/*   Updated: 2022/11/11 16:01:59 by code             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_reverse_rotate_a(t_stack	*list)
{
	// int	temp;

	// temp = list->num;
	// list->num = list->next->num;
	// list->next->num = temp;
	// temp = list->num;
	// list->num = list->prev->num;
	// list->prev->num = temp;
	// temp = list->num;
	// list->num = list->next->num;
	// list->next->num = temp;
	// temp = list->num;
	// list->num = list->next->num;
	// list->next->num = temp;
	while (!(list->tail))
	{
		list->head = list->head->prev;
		list = list->next;
	}
	if (list->tail)
	{
		list->head = list->head->prev;
		list->head->prev->tail = 1;
		list->tail = 0;
	}
	write(1, "rra", 3);
	write(1, "\n", 1);
	return (list->head);
}
