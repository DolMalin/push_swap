/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 15:59:20 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/21 18:33:24 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int main(int ac, char **av)
{
	t_list	*a = NULL;
	t_list	*b = NULL;

	check_input_validity(ac, av);
	init_stacks(&a, &b, ac, av);
	print_stack(a, b);
	pb(&a, &b);
	printf("\n\n");
	print_stack(a, b);
	pa(&a, &b);
	printf("\n\n");
	print_stack(a, b);
	return (0);
}
