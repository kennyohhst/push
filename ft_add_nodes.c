/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_nodes.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: code <code@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 16:21:16 by code              #+#    #+#             */
/*   Updated: 2022/11/15 19:26:48 by code             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_add_nodes(int num, t_stack **list)
{
	t_stack	*temp;
	
	temp = malloc(sizeof(t_stack));
	if (!temp)
		exit(write(1, "Error", 5));
	temp->num = num;
	if ((*list))
	{
		while (!(*list)->tail)
			(*list) = (*list)->next;
		(*list)->next = temp;
		temp->prev = (*list);
		(*list)->tail = 0;
		temp->tail = 1;
		temp->head = (*list)->head;
		(*list) = (*list)->head;
	}
	else
	{
		temp->head = temp;
		temp->tail = 1;
		(*list) = temp;
	}
	temp->next = temp->head;
	temp->head->prev = temp;
}