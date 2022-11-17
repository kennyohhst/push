/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_remove_node.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: code <code@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 18:57:50 by code              #+#    #+#             */
/*   Updated: 2022/11/11 16:01:59 by code             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_remove_node(t_stack *list, int num)
{
	while (!list->tail)
	{
		if (num == list->num)
		{
			list->head = list->prev;
			list->prev->next = list->next;
			list->next->prev = list->prev;
		}
		list = list->next;
	}
	if (num == list->num)
	{
		list->head = list->prev;
		list->prev->next = list->next;
		list->next->prev = list->prev;
	}
	list = list->head;
}
