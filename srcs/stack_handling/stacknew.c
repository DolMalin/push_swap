/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacknew.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 11:50:21 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/23 11:54:12 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_stack	*stacknew(int content)
{
	t_stack	*output;

	output = malloc(sizeof(t_stack));
	if (!output)
		return (NULL);
	output->content = content;
	output->next = NULL;
	return (output);
}
