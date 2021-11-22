/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 15:15:19 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/22 11:25:39 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	init_stacks(t_list **a, t_list **b, int ac, char **av)
{
	int	i;

	i = 1;
	while (i < ac)
	{
		ft_lstadd_back(a, ft_lstnew(av[i]));
		i++;
	}
	ft_lstadd_back(b, ft_lstnew(NULL));
}
