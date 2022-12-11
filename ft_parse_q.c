/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_q.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: code <code@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 22:56:35 by code              #+#    #+#             */
/*   Updated: 2022/12/09 19:33:32 by code             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_parse_q(t_stack *list, char **argv)
{
	char	**string;
	int		x;
	int		y;

	x = 0;
	string = ft_split(argv[1], ' ');
	if ((*string) == NULL)
		exit(write(1, "error split failed", 18));
	while (string[x] != NULL)
	{
		y = ft_grab_num(string[x]);
		ft_add_nodes(y, &list, NULL);
		x++;
	}
	ft_check_double(list);
	ft_indexing(list);
	ft_free_s(string);
	return (list);
}
