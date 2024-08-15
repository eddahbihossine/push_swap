/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heddahbi <heddahbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 02:54:36 by heddahbi          #+#    #+#             */
/*   Updated: 2023/05/10 20:30:16 by heddahbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_reverse(t_data **stack)
{
	sa(*stack);
	rra(stack);
}

void	sort_3numbers(t_data **a)
{
	int	f;
	int	b;
	int	c;

	f = (*a)->content;
	b = (*a)->next->content;
	c = (*a)->next->next->content;
	if (!(check_sort(a)))
	{
		if (f > b && c > b && c > f)
			sa(*a);
		else if (f > b && b > c && f > c)
			swap_reverse(a);
		else if (f > b && b < c && c < f)
			ra(a);
		else if (f < b && b > c && c > f)
			swap_reverse(a);
		else
			rra(a);
	}
}
