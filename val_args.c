/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   val_args.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmenezes <cmenezes@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 20:43:31 by cmenezes          #+#    #+#             */
/*   Updated: 2022/12/15 20:47:59 by cmenezes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	val_args( int count, char **val_arg)
{
	int	i;
	int	j;

	i = 0;
	while (++i < count)
	{
		j = 0;
		while (val_arg[i][j] != '\0')
		{
			if ((val_arg[i][j] == '-') || (val_arg[i][j] == '+'))
				j++;
			if (ft_isdigit(val_arg[i][j]) == 0)
				return (1);
			j++;
		}
		if ((ft_atol(val_arg[i]) > INT_MAX) || (ft_atol(val_arg[i]) < INT_MIN))
			return (1);
	}
	return (0);
}
