/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkalika <kkalika@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 15:37:45 by code              #+#    #+#             */
/*   Updated: 2022/11/17 15:52:23 by kkalika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	// int i = 0;
	// int num;
	t_stack	*stack_a;
	t_stack *stack_b;
	
	stack_a = NULL;
	if (argc < 2 || !argv)
		return (0);
	stack_a = ft_parsing(stack_a, argv);
	ft_sort(&stack_a, &stack_b);

	
	// char **string = ft_split(argv[1], ' ');
	// ft_strncmp(string[0], string[1]);
	// while (string[i] != NULL)
	// {
	// 	num = ft_grab_num(string[i]);
	// 	ft_add_nodes(num, &stack_a);
	// 	printf("this is num in string:	%s\n", string[i]);	
	// 	i++;
	// }
	
	
	
	
	// stack_a = ft_parsing(argc, argv, 0, 1);
		

	// LETS TEST THIS BITCH
	while (stack_a->tail != 1)
	{
		printf("help: %d  ", stack_a->num);
		stack_a = stack_a->next;
	}
	printf("me : %d\n", stack_a->num);
	printf("tail : %d\n", stack_a->tail);
	if (stack_a != NULL)
		ft_free_list(stack_a->head);
	if (stack_b != NULL)
		ft_free_list(stack_b->head);
	// system("leaks push_swap");
	return (0);
}
