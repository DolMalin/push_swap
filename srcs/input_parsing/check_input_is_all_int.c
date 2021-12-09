/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input_is_all_int.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 11:30:00 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/12/09 11:53:02 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	check_input_is_all_int(char **args)
{
	int			i;
	int			j;
	long long	arg_int;

	i = 0;
	j = 0;
	while (args[i])
	{
		j = 0;
		while (args[i][j])
		{
			if (args[i][j] == '-' && j == 0)
				j++;
			if (!ft_isdigit(args[i][j]))
				return (0);
			j++;
		}
		arg_int = ft_atoll(args[i]);
		if (arg_int < INT_MIN || arg_int > INT_MAX)
			return (0);
		i++;
	}
	return (1);
}
