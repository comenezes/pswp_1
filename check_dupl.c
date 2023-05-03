/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_dupl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmenezes <cmenezes@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 20:44:44 by cmenezes          #+#    #+#             */
/*   Updated: 2022/12/15 20:45:34 by cmenezes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_dupl(int count, char **chk_arg)
{
	int	i;
	int	j;

	i = 0;
	while (++i < count)
	{
		j = i + 1;
		while (j < count)
		{
			if (ft_atol(chk_arg[i]) == ft_atol(chk_arg[j]))
				return (1);
			j++;
		}
	}
	return (0);
}