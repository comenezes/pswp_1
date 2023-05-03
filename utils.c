/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmenezes <cmenezes@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 20:46:40 by cmenezes          #+#    #+#             */
/*   Updated: 2023/05/02 19:30:49 by cmenezes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_swap(t_stack **node, char *print_movement)
{
    t_stack    *a;
    t_stack    *b;

    a = *node;
    b = (*node)->next;
    *node = b;
    a->next = b->next;
    b->next = a;
	printf("%s\n", print_movement);
}
void   ft_reverse_rotate(t_stack **node, char *print_movement)
{
	t_stack *a;
	t_stack *b;
	t_stack	*temp;

	temp = plast_node(*node);
	// printf("Temp Next = %d\n",temp->next->content);
	// printf("Temp Content= %d\n",temp->content);
	a = *node;
	b = last_node(*node);
	// printf("\nB = %d\n",b->content);
	// printf("BN = %d\n",b->next);
	// printf("A = %d\n",a->content);
	b->next = a;
	temp->next = NULL;
	// printf("BNN = %d\n",b->next);
	*node = b;
	printf("%s\n", print_movement);
}
void   ft_rotate(t_stack **node, char *print_movement)
{
	t_stack *a;
	t_stack *b;
	t_stack	*temp;

	a = *node;
	a = a->next;
	temp = *node;
	b = last_node(*node);
	b->next = temp;
	temp->next = NULL;
	*node = a;
	printf("%s\n", print_movement);
}
ft_push(t_stack **node, char *print_movement)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	t_stack	*temp;

	
}