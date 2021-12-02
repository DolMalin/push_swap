/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 15:59:20 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/23 12:13:230 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/* 
	- segfault with negative nbrs (sort chunk should start at lowest nbr)
	- opti (store all instructions in a list and then replace useless moves)
	- opti for 500 nbr
*/

int main(int ac, char **av)
{
	char	**args;
	t_stack	*a;
	t_stack	*b;

	args = check_input_validity(ac, av);
	init_stacks(&a, &b, args);
	print_stack(a, b);
	sorting(&a, &b);
	print_stack(a, b);
	stackclear(&a, free);

	if (ac > 2)
		return (0);
	int	i = 0;
	while (args[i])	
	{
		free(args[i]);
		i++;
	}
	free(args);
	return (0);
}
