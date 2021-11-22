/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 15:59:20 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/22 11:35:52 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int main(int ac, char **av)
{
	t_list	*a;
	t_list	*b;

	check_input_validity(ac, av);
	init_stacks(&a, &b, ac, av);

	print_stack(a, b);
	printf("\n\n");

	sa(&a);
	print_stack(a, b);
	printf("\n\n");

	return (0);
}
