/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stackadd_back.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 11:45:54 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/12/04 14:12:59 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	stackadd_back(t_stack **alst, t_stack *new)
{
	if (*(alst))
		stacklast((*alst))->next = new;
	else
		*alst = new;
}
