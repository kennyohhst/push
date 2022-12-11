/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_double.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: code <code@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 18:05:22 by code              #+#    #+#             */
/*   Updated: 2022/12/09 17:13:45 by code             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_check_double(t_stack *list)
{
	t_stack	*a;
	t_stack	*b;

	if (!list)
		exit(write(1, "what input?", 11));
	a = list;
	while (a->next != NULL)
	{
		b = a->next;
		if (a->num == b->num)
			exit(write(1, "check_double error 1", 20));
		while (b->next != NULL)
		{
			if (a->num == b->num)
				exit(write(1, "check_double error 2", 20));
			b = b->next;
			if (a->num == b->num)
				exit(write(1, "check_double error 3", 20));
		}
		a = a->next;
	}
}
