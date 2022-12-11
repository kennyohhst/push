/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: code <code@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 19:00:08 by code              #+#    #+#             */
/*   Updated: 2022/12/03 20:22:14 by code             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_rotate_a(t_stack *list)
{
	t_stack	*temp;
	t_stack	*first;

	first = list;
	temp = list;
	while (temp->next)
		temp = temp->next;
	list = list->next;
	temp->next = first;
	first->next = NULL;
	write(1, "ra", 2);
	write(1, "\n", 1);
	return (list);
}
