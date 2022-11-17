/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_grab_num.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkalika <kkalika@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 15:30:21 by code              #+#    #+#             */
/*   Updated: 2022/11/17 14:45:00 by kkalika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_grab_num(char *str)
{	
	int		num;

	num = 0;
	ft_numcheck(str);
	if (ft_atoi(str) != ft_atoi_l(str))
		exit(write(1, "not a number", 12));
	num = ft_atoi(str);
	return (num);
}
