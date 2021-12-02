/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input_validity.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 11:15:13 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/12/02 11:54:43 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

char	**check_input_validity(int ac, char **av)
{
	char	**args;	
	if (ac < 2)
		exit(EXIT_FAILURE);
	if (ac == 2)
		args = ft_split(av[1], ' ');
	else
		args = &av[1];

	if (!check_input_is_all_int(ac, args) || check_double(args))
		exit_program_with_error();
	return (args);
}
