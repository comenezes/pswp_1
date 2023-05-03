/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmenezes <cmenezes@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 21:58:21 by cmenezes          #+#    #+#             */
/*   Updated: 2023/05/02 19:23:47 by cmenezes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


// t_stack	*create_empty_stack()
// {
// 	t_stack	*stack;
	
//     stack = malloc(sizeof(t_stack));
//     if (stack == NULL)
//         return (NULL);
//    return (stack);
// }

t_stack	*create_empty_node()
{
    t_stack   *node;

    node = malloc(sizeof(t_stack));
    if (node == NULL)
        return (NULL);
    node->next = NULL;
    return (node);
}

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	
	// t_stack	*stack_head;

	if ((val_args(argc, argv) != 0) || (check_dupl(argc, argv) != 0))
	{
		write(1, "Error\n", 6);
		return (1);
	}
	if (argc <= 2)
		return (0);
	if (check_is_sorted(argc, argv) == 0)
		return (0);
	else
	{
	//write(1,"Opaaa!\n",8);
	//	stack_head = malloc(sizeof(t_stack));
	//	if (stack_head == NULL)
	//		return (1);
	//push_swap(argc, stack_a);
		stack_a = ft_populatestack(argc, argv);
		stack_b = malloc(sizeof(t_stack));
    	if (stack_b == NULL)
        	return (1);
    	stack_b = NULL;
		//stack_b = create_empty_stack;
		ft_print_list(stack_a);
		printf("-------\n");
		ft_swap(&stack_a, "sa");
		ft_print_list(stack_a);
		printf("-------\n");
		ft_rotate(&stack_a, "ra");
		ft_print_list(stack_a);
		printf("-------\n");
		ft_reverse_rotate(&stack_a, "rra");
		ft_print_list(stack_a);
	}
	return (0);
}