/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 15:15:19 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/23 15:09:50 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	init_stacks(t_stack **a, t_stack **b, int ac, char **av)
{
	int	i;

	i = 1;
	while (i < ac)
	{
		stackadd_back(a, stacknew(ft_atoi(av[i])));
		i++;
	}
	b = malloc(sizeof(t_stack));
}
