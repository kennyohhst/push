/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_double.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: code <code@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 13:50:49 by code              #+#    #+#             */
/*   Updated: 2022/11/13 16:08:48 by code             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_double(char **string)
{
	int	x;
	int	y;

	x = 0;
	y = 1;
	while (string[x] != NULL)
	{
		if (ft_strlen(string[x]) == ft_strlen(string[y]))
			if (!(ft_strncmp(string[x], string[y], ft_strlen(string[x]))))
				exit (write(1, "fuck", 4));
		y++;
		if (string[y] == NULL)
		{
			x++;
			y = x + 1;
			if (string[y] == NULL)
				return (1);
		}
	}
	return (1);
}
