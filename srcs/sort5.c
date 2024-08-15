/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heddahbi <heddahbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 03:04:00 by heddahbi          #+#    #+#             */
/*   Updated: 2023/05/13 05:03:44 by heddahbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_min(t_data **a)
{
	int	min;
	int	counter;

	min = get_min_list(*a);
	counter = 0;
	while ((*a)->content != min)
	{
		counter++;
		if (counter < 2)
			sa(*a);
		else
			rra(a);
	}
}

void	sort_5numbers(t_data **a, t_data **b)
{
	int	min;
	int	counter;

	if (!check_sort(a))
	{
		min = get_min_list(*a);
		counter = 0;
		while ((*a)->content != min)
		{
			counter++;
			if (counter < 2)
				sa(*a);
			else
				rra(a);
		}
		pb(a, b);
		check_min(a);
		pb(a, b);
		sort_3numbers(a);
		pa(b, a);
		pa(b, a);
	}
}
