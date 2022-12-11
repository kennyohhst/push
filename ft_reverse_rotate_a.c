/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate_a.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: code <code@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 17:01:29 by code              #+#    #+#             */
/*   Updated: 2022/12/03 16:31:46 by code             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_reverse_rotate_a(t_stack *list)
{
	t_stack	*temp;
	t_stack	*first;

	temp = list;
	first = list;
	while (temp->next)
		temp = temp->next;
	while (first->next->next)
		first = first->next;
	temp->next = list;
	first->next = NULL;
	list = temp;
	write(1, "rra", 3);
	write(1, "\n", 1);
	return (list);
}
