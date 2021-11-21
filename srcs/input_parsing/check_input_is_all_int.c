/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input_is_all_int.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 11:30:00 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/21 11:57:40 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	check_input_is_all_int(int ac, char **av)
{
	int			i;
	int			j;
	long long	arg_int;

	i = 1;
	j = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			if (!ft_isalnum(av[i][j]))
				return (0);
			j++;
		}
		arg_int	= ft_atoll(av[i]);
		if (arg_int < INT_MIN || arg_int > INT_MAX)
			return (0);
		i++;
	}
	return (1);
}
