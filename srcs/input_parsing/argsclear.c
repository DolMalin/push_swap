/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argsclear.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 14:21:01 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/12/04 14:25:50 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	argsclear(int ac, char **args)
{
	int	i;

	i = 0;
	if (ac > 2)
		return ;
	while (args[i])
	{
		free(args[i]);
		i++;
	}
	free(args);
}
