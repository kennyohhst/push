/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_grab_num.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: code <code@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 15:30:21 by code              #+#    #+#             */
/*   Updated: 2022/11/11 18:25:36 by code             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_grab_num(char *str)
{	
	char	*temp;
	int		i;
	int		num;

	num = 0;
	if (!ft_numcheck(str))
		exit(write(1, "Error", 5));
	i = 0;
	temp = malloc(sizeof(str) + 1);
	if (!temp)
		return (0);
	while (str[i] != ' ' && str[i] != '\0')
	{
		temp[i] = str[i];
		i++;
	}
	temp[i] = '\0';
	if (ft_atoi(temp) != ft_atoi_l(temp))
		exit(write(1, "not a number", 12));
	num = ft_atoi(temp);
	return (ft_free(temp), num);
}
