/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heddahbi <heddahbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 02:54:36 by heddahbi          #+#    #+#             */
/*   Updated: 2023/05/10 02:54:37 by heddahbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_reverse(t_data **stack)
{
	sa(*stack);
	rra(stack);
}

void	sort_3numbers(t_data **new)
{
	int	a;
	int	b;
	int	c;

	a = (*new)->content;
	b = (*new)->next->content;
	c = (*new)->next->next->content;
	if (!(check_sort(new)))
	{
		if (a > b && c > b && c > a)
			sa(*new);
		else if (a > b && b > c && a > c)
			swap_reverse(new);
		else if (a > b && b < c && c < a)
			ra(new);
		else if (a < b && b > c && c > a)
			swap_reverse(new);
		else
			rra(new);
	}
}
