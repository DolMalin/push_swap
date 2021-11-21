/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input_validity.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 11:15:13 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/21 11:41:17 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	check_input_validity(int ac, char **av)
{
	if (ac < 2)
		exit(EXIT_FAILURE);
	if (!check_input_is_all_int(ac, av))
		exit_program_with_error();
}
