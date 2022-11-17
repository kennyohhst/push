/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: code <code@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 19:34:09 by code              #+#    #+#             */
/*   Updated: 2022/11/11 16:01:59 by code             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_push_b(t_stack **list_a)
{
	t_stack	*temp;

	temp = malloc(sizeof(t_stack));
	if (!temp)
		exit(write(1, "Error", 5));
	temp->num = (*list_a)->num;
	(*list_a)->prev->next = (*list_a)->next;
	(*list_a)->next->prev = (*list_a)->prev;
	(*list_a) = (*list_a)->next;
	(*list_a)->head = (*list_a);
	while (!(*list_a)->tail)
	{
		(*list_a) = (*list_a)->next;
		(*list_a)->head = (*list_a)->prev->head;
	}
	(*list_a) = (*list_a)->next;
	temp->next = temp;
	temp->prev = temp;
	temp->head = temp;
	temp->tail = 1;
	write(1, "pb", 2);
	write(1, "\n", 1);
	return (temp);
}
