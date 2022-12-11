/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: code <code@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 18:19:15 by code              #+#    #+#             */
/*   Updated: 2022/12/03 16:31:46 by code             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free_list(t_stack *list)
{
	t_stack	*temp;

	if (!list)
		return ;
	while (list)
	{
		temp = list;
		list = list->next;
		free(temp);
	}
}
