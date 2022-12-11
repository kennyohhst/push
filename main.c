/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: code <code@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 15:37:45 by code              #+#    #+#             */
/*   Updated: 2022/12/09 20:10:15 by code             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// static void	test_this_bitch(t_stack *a, t_stack *b, t_stack *t, t_stack *emp)
// {
// 	printf("\n\nLets test This bitch:\n\n");
// 	t = a;
// 	while (t && t->next != NULL)
// 	{
// 		printf("num>	%d****", t->num);
// 		printf("%d		<index\n", t->index);
// 		t = t->next;
// 	}
// 	if (t)
// 	{
// 		printf("num>	%d****", t->num);
// 		printf("%d		<index\n", t->index);
// 	}
// 	if (b)
// 	{
// 		emp = b;
// 		while (emp->next != NULL)
// 		{
// 			printf("num_>	%d****", emp->num);
// 			printf("%d		<index_\n", emp->index);
// 			emp = emp->next;
// 		}
// 		printf("num_>	%d****", emp->num);
// 		printf("%d		<index_", emp->index);
// 		ft_free_list(b);
// 	}
// 	if (a)
// 		ft_free_list(a);
// }

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	b = NULL;
	a = NULL;
	if (argc < 2 || !argv)
		return (0);
	if (argc == 2)
		a = ft_parse_q(a, argv);
	else
		a = ft_parse(a, argv);
	ft_sort(&a, &b);
	// test_this_bitch(a, b, NULL, NULL);
	if (a)
		ft_free_list(a);
	if (b)
		ft_free_list(b);
	return (0);
}
