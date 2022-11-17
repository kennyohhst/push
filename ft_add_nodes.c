/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_nodes.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkalika <kkalika@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 16:21:16 by code              #+#    #+#             */
/*   Updated: 2022/11/17 15:58:43 by kkalika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_add_nodes(int num, t_stack **list)
{
	t_stack	*temp;
	t_stack	*new;
	
	new = malloc(sizeof(t_stack));
	if (!new)
		exit(write(1, "Error", 5));
	new->num = num;
	temp = (*list);
	if (temp)
	{
		(*list)->tail = 0;
		temp = temp->prev;
		temp->tail = 0;
		temp->next = new;
		(*list)->prev = new;
		new->prev = temp;
		new->next = (*list);
		new->tail = 1;
	}
	else
	{
		new->next = new;
		new->prev = new;
		new->tail = 1;
		(*list) = new;
	}
}
