/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_grab_num.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: code <code@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 15:30:21 by code              #+#    #+#             */
/*   Updated: 2022/11/18 17:50:25 by code             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_grab_num(char *str)
{	
	int		num;

	num = 0;
	ft_numcheck(str);
	if (ft_atoi(str) != ft_atoi_l(str))
		exit(write(1, "grabnum error", 13));
	num = ft_atoi(str);
	return (num);
}
