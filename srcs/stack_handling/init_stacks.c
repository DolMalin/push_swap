/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 15:15:19 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/12/01 13:17:44 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	init_stacks(t_stack **a, t_stack **b, int ac, char **av)
{
	int	i;
	t_stack *buff;

	i = 1;
	(void)b;
	while (i < ac)
	{
		buff = stacknew(ft_atoi(av[i]));
		if (!buff)
		{
			stackclear(a, free);
			exit_program_with_error();
		}
		stackadd_back(a, buff);
		i++;
	}
}
