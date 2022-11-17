/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: code <code@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 16:36:20 by code              #+#    #+#             */
/*   Updated: 2022/11/11 15:55:22 by code             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_parsing(int argc, char **argv, int y, int x)
{	
	t_stack		*list;
	int			num;

	while (argc != 1)
	{
		num = ft_grab_num(argv[x] + y);
		ft_add_nodes(num, &list);
		if (argv[x][y] == '+' || argv[x][y] == '-')
			y++;
		if (num <= 0 && argv[x][y] != '\0')
			y++;
		while (num != 0 && argv[x][y] != '\0')
		{
			num = num / 10;
			y++;
		}
		if (argv[x][y] == ' ' || argv[x][y] == '+')
			y++;
		if (argv[x][y] == '\0')
		{
			x++;
			y = 0;
			argc--;
		}
	}
	return (list->head);
}
