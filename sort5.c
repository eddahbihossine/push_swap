/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heddahbi <heddahbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 03:04:00 by heddahbi          #+#    #+#             */
/*   Updated: 2023/05/10 03:04:01 by heddahbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_5numbers(t_data **new, t_data **b)
{
	int	min;
	int	counter;

	if (!check_sort(new))
	{
		min = get_min_list(*new);
		counter = 0;
		while ((*new)->content != min)
		{
			counter++;
			if (counter <= 2)
				sa(*new);
			else
				rra(new);
		}
		pb(new, b);
		sort_4numbers(new, b);
		pa(b, new);
	}
}
