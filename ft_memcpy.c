/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: code <code@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 19:04:49 by kkalika           #+#    #+#             */
/*   Updated: 2022/11/20 17:15:39 by code             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*dest;
	char	*sauce;
	size_t	i;

	if (!src || !dst || n <= 0)
		return (0);
	dest = (char *) dst;
	sauce = (char *) src;
	i = 0;
	while (n != i)
	{
		dest[i] = sauce[i];
		i++;
	}
	return (dst);
}
