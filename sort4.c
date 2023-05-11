/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heddahbi <heddahbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 02:57:11 by heddahbi          #+#    #+#             */
/*   Updated: 2023/05/10 20:28:05 by heddahbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check(t_data **a)
{
	int	min;
	int	counter;

	counter = 0;
	min = get_min_list(*a);
	while ((*a)->content != min)
	{
		counter++;
		if (counter <= 2)
			sa(*a);
		else
			rra(a);
	}	
}

void	sort_4numbers(t_data	**a, t_data	**b)
{
	if (!check_sort(a))
	{
		check(a);
		pb(a, b);
		check(a);
		pb(a, b);
		sort_2numbers(a);
		pa(b, a);
		pa(b, a);
	}
}
