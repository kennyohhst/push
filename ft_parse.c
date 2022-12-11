/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: code <code@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 17:13:16 by code              #+#    #+#             */
/*   Updated: 2022/12/03 16:31:46 by code             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_parse(t_stack *list, char **argv)
{
	int	i;

	argv++;
	while (*argv != NULL)
	{
		i = ft_grab_num(*argv);
		ft_add_nodes(i, &list, NULL);
		argv++;
	}
	ft_check_double(list);
	ft_indexing(list);
	return (list);
}
