/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: code <code@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 18:19:15 by code              #+#    #+#             */
/*   Updated: 2022/11/15 19:22:14 by code             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free_list(t_stack *list)
{

	int		i;
	
	if (!list)
		return ;
	i = ft_length_list(list);		
	while (i > 1)
	{
		printf("this is num:	%d\n", list->prev->num);
		free(list->prev);
		if (i == 2)
			break ;
		list = list->next;
		i--;
	}
	free(list);
}

// 0 6 2 4 5 9 7