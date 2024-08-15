/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_intructions.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heddahbi <heddahbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 03:28:53 by heddahbi          #+#    #+#             */
/*   Updated: 2023/05/10 03:28:57 by heddahbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	calculate_instructions(t_data *list, int pos)
{
	int	medium;
	int	instructions;

	medium = ft_lstsize(list) / 2;
	if (pos <= medium)
		instructions = pos;
	else
		instructions = (ft_lstsize(list) - pos);
	return (instructions);
}
