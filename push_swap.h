/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmenezes <cmenezes@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 23:55:40 by cmenezes          #+#    #+#             */
/*   Updated: 2023/05/02 18:38:06 by cmenezes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# define INT_MAX 2147483647
# define INT_MIN -2147483648
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

typedef struct          s_stack
{
    int                 content;
    int                 index;
    struct s_stack      *next;
}   t_stack;

int	ft_isdigit(int c);
long	ft_atol(const char *str);
int	val_args(int count, char **val_arg);
int	check_dupl(int count, char **chk_arg);
int	check_is_sorted(int count, char **chk_arg);
t_stack *create_node(int nbr);
void    ft_print_list(t_stack *node);
t_stack *ft_populatestack(int count, char **chk_arg);
void    ft_add_node_last(t_stack **stack_head, t_stack *new_node);
t_stack *last_node(t_stack *stack);
t_stack *plast_node(t_stack *stack);
t_stack *create_empty_stack();
void    ft_swap(t_stack **node, char *print_movement);
void    ft_reverse_rotate(t_stack **node, char *print_movement);
void   ft_rotate(t_stack **node, char *print_movement);

#endif