/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: code <code@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 19:07:45 by kkalika           #+#    #+#             */
/*   Updated: 2022/11/12 21:22:26 by code             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*rstr;

	if (!s)
		return (NULL);
	if (ft_strlen(s) <= start)
		return (ft_strdup(""));
	if (len >= ft_strlen(s + start))
		len = ft_strlen(s + start);
	if (!s)
		return (NULL);
	rstr = (char *) malloc(len + 1);
	if (!rstr)
		return (NULL);
	ft_strlcpy(rstr, s + start, len + 1);
	return (rstr);
}

// int	main(void)
// {
// 	char	*str;
// 	char	*nstr;

// 	str = "";
// 	nstr = ft_substr(str, 3, 3);
// 	printf("%s\n", nstr);
// 	printf("%d\n", nstr[3]);
// 	return (0);
// }