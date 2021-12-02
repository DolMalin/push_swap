/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 15:15:19 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/12/02 12:02:15 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	init_stacks(t_stack **a, t_stack **b, char **args)
{
	int	i;
	t_stack *buff;

	i = 0;
	(void)b;
	while (args[i])
	{
		buff = stacknew(ft_atoi(args[i]));
		if (!buff)
		{
			stackclear(a, free);
			exit_program_with_error();
		}
		stackadd_back(a, buff);
		i++;
	}
}
