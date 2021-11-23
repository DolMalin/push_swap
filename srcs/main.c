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

int main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b = NULL;

	check_input_validity(ac, av);
	init_stacks(&a, &b, ac, av);

	print_stack(a, b);
	printf("\n\n");

	sa(&a);
	print_stack(a, b);
	printf("\n\n");

	return (0);
}
