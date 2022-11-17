/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: code <code@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 19:00:08 by code              #+#    #+#             */
/*   Updated: 2022/11/11 16:01:59 by code             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_rotate_a(t_stack	*list)
{
	// int	temp;

	// temp = list->num;
	// list->num = list->prev->num;
	// list->prev->num = temp;
	// temp = list->num;
	// list->num = list->next->num;
	// list->next->num = temp;
	// write(1, "ra", 2);
	// write(1, "\n", 1);
	// return (list);
	list->head = list->next;
	while (!(list->tail))
	{
		list = list->next;
		list->head = list->prev->head;
	}
	if (list->tail)
		list->tail = 0;
	list->head = list->prev->head;
	list->head->prev->tail = 1;
	write(1, "ra", 2);
	write(1, "\n", 1);
	return (list->head);
}
