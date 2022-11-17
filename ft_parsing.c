/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: code <code@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 22:56:35 by code              #+#    #+#             */
/*   Updated: 2022/11/13 20:02:58 by code             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_parsing(t_stack *list, char **argv)
{
		char 	**string;
		int		x;
		int		y;

		x = 0;		
		string = ft_split(argv[1], ' ');
		if (!(ft_check_double(string)))
			return (ft_free_s(string), NULL);
		while (string[x] != NULL)
		{
			y = ft_grab_num(string[x]);
			ft_add_nodes(y, &list);
			x++;
		}
		
		ft_free_s(string);
	return (list);
}