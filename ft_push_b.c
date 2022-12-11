/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: code <code@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 18:02:17 by code              #+#    #+#             */
/*   Updated: 2022/12/08 20:02:57 by code             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_b(t_stack **src, t_stack **dst)
{
	t_stack	*temp;

	if (!(*dst))
	{
		(*dst) = (*src);
		(*src) = (*src)->next;
		(*dst)->next = NULL;
	}
	else
	{
		temp = (*src)->next;
		(*src)->next = (*dst);
		(*dst) = (*src);
		(*src) = temp;
	}	
	write(1, "pb", 2);
	write(1, "\n", 1);
}
