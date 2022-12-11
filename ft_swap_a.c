/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: code <code@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 19:00:08 by code              #+#    #+#             */
/*   Updated: 2022/12/03 16:31:46 by code             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_swap_a(t_stack *list)
{
	t_stack	*temp;

	temp = list->next;
	list->next = temp->next;
	temp->next = list;
	list = temp;
	write(1, "sa", 2);
	write(1, "\n", 1);
	return (list);
}
