/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 15:15:19 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/21 15:48:01 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	init_stacks(t_list **a, int ac, char **av)
{
	int		i;

	i = 1;
	while (i < ac)
	{
		ft_lstadd_back(a, ft_lstnew(ft_atoi(av[i])));
		i++;
	}
}
