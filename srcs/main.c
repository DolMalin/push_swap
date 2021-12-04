/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 14:14:47 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/12/04 14:22:40 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;
	char	**args;

	args = check_input_validity(ac, av);
	init_stacks(&a, &b, args);
	sorting(&a, &b);
	stackclear(&a, free);
	argsclear(ac, args);
	return (0);
}
