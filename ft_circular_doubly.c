/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_circular_doubly.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: code <code@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:29:25 by code              #+#    #+#             */
/*   Updated: 2022/11/11 16:01:59 by code             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_circular_doubly(t_stack *list)
{
	list->head = list->head;
	list->next->prev = list;
	list->tail = 1;
	list = list->next;
	return (list);
}
