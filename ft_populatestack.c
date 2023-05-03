/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_populatestack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmenezes <cmenezes@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 21:58:21 by cmenezes          #+#    #+#             */
/*   Updated: 2023/05/02 12:23:49 by cmenezes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// #include "../libft/libft.h"

void ft_print_list(t_stack *stack_head)
{
    t_stack   *node;
//    char    *a;
    node = stack_head;
    while (node != NULL)
    {
        printf(">>%d\n",node->content); //ATEENCAO
        node = node->next;
    }
    return ;
}
t_stack *last_node(t_stack *stack)
{
    if (stack == NULL)
        return (NULL);
    while (stack->next != NULL)
    {
        stack = stack->next;
    }
    return (stack);
}
t_stack *plast_node(t_stack *stack)
{
    if (stack == NULL)
        return (NULL);
    while (stack->next->next != NULL)
    {
        stack = stack->next;
    }
    return (stack);
}
void    ft_add_node_last(t_stack **stack_head, t_stack *new_node)
{
    t_stack   *temp;
    
    if (stack_head == NULL)
        return ;
    if (*stack_head == NULL)
    {
        *stack_head = new_node;
        return ;
    }
    temp = last_node(*stack_head);
    temp->next = new_node;
}
t_stack    *ft_populatestack(int count, char **chk_arg)
{
    t_stack   *stack;
    int       i_count;
    int       nbr;
    
    nbr = 0;
    i_count = 1;
    // stack = create_empty_stack;
    stack = malloc(sizeof(t_stack));
    if (stack == NULL)
        return (NULL);
    stack = NULL;
    while (i_count < count) // checar qual valor de chk_arg
    {
        // nbr = ft_atol(chk_arg[i_count]);
        nbr = ft_atol(chk_arg[i_count]);
      //  printf("%d <<- \n",nbr);
        ft_add_node_last(&stack,create_node(nbr));
        i_count++;
    }
    return (stack);
}