/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tiny_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: code <code@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 17:16:16 by code              #+#    #+#             */
/*   Updated: 2022/12/09 16:33:45 by code             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_sort_two(t_stack *list)
{
	t_stack	*temp;

	temp = list->next;
	temp->next = list;
	list = temp;
	list->next->next = NULL;
	write(1, "sa", 2);
	write(1, "\n", 1);
	return (list);
}
