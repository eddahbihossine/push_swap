/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heddahbi <heddahbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 03:04:00 by heddahbi          #+#    #+#             */
/*   Updated: 2023/05/10 20:28:13 by heddahbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
			if (counter <= 2)
				sa(*a);
			else
				rra(a);
		}
		pb(a, b);
		sort_4numbers(a, b);
		pa(b, a);
	}
}
