/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heddahbi <heddahbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 02:57:11 by heddahbi          #+#    #+#             */
/*   Updated: 2023/05/10 02:57:12 by heddahbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check(t_data **new)
{
	int	min;
	int	counter;

	counter = 0;
	min = get_min_list(*new);
	while ((*new)->content != min)
	{
		counter++;
		if (counter <= 2)
			sa(*new);
		else
			rra(new);
	}	
}

void	sort_4numbers(t_data	**new, t_data	**b)
{
	if (!check_sort(new))
	{
		check(new);
		pb(new, b);
		check(new);
		pb(new, b);
		sort_2numbers(new);
		pa(b, new);
		pa(b, new);
	}
}
