/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_indexing.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: code <code@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 18:40:11 by code              #+#    #+#             */
/*   Updated: 2022/12/03 20:16:56 by code             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_indexing(t_stack *list)
{
	t_stack	*temp_a;
	t_stack	*temp_b;
	int		i;

	if (ft_length_list(list) <= 1)
		exit(write(1, "just one number?", 16));
	i = 0;
	temp_a = list;
	temp_b = temp_a->next;
	while (temp_a)
	{
		if (temp_a->num > temp_b->num)
			i++;
		temp_b = temp_b->next;
		if (!temp_b)
		{
			temp_a->index = i;
			temp_a = temp_a->next;
			temp_b = list;
			i = 0;
		}
	}
}
