/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numcheck.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: code <code@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 15:29:11 by code              #+#    #+#             */
/*   Updated: 2022/11/04 19:53:49 by code             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_numcheck(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] == ' ' && str[i] != '\0')
			i++;
		if ((str[i] == '-' || str[i] == '+') && str[i] != '\0')
			i++;
		while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
			i++;
		if (str[i] < '0' && str[i] > '9' && str[i] != '\0')
			exit(write(1, "Error", 6));
		if (str[i] != ' ' && str[i] != '\0')
			return (0);
	}
	return (1);
}
