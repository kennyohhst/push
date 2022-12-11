/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_nodes.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: code <code@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 16:21:16 by code              #+#    #+#             */
/*   Updated: 2022/12/09 17:11:22 by code             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_add_nodes(int num, t_stack **list, t_stack *temp)
{
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	if (!new)
		exit(write(1, "add_nodes malloc error", 22));
	new->num = num;
	temp = (*list);
	if (temp)
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
		new->next = NULL;
	}
	else
	{
		new->next = NULL;
		(*list) = new;
	}
}
