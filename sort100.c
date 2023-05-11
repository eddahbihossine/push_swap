/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort100.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heddahbi <heddahbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 03:17:10 by heddahbi          #+#    #+#             */
/*   Updated: 2023/05/10 20:28:27 by heddahbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	init_chunk( t_data **a)
{	
	int	chunk_size;

	if (ft_lstsize(*a) <= 100)
		chunk_size = 5;
	else
		chunk_size = 9;
	return (chunk_size);
}

void	sort_infinitenumbers(t_data **a, t_data **b)
{
	int	chunk;
	int	i;
	int	j;
	int	chunk_size;

	chunk_size = init_chunk(a);
	chunk = ft_lstsize(*a) / chunk_size;
	i = chunk;
	j = 0;
	while (*a)
	{
		if ((*a)->index < i)
		{
			pb(a, b);
			j++;
			if (i - (chunk / 2) < (*b)->index)
				rb(b);
			if (j == i)
				i += chunk;
		}
		else
			ra(a);
	}
	push_to_a(a, b);
}

void	check_and_push(int pos, int instructions, t_data **b, t_data **a)
{
	if (pos < ft_lstsize(*b) / 2)
	{
		while (instructions--)
			rb(b);
	}
	else
	{
		while (instructions--)
			rrb(b);
	}
	pa(b, a);
}

void	push_to_a(t_data	**a, t_data	**b)
{
	int	max_pos;
	int	prev_pos;
	int	max_instructions;
	int	prev_instructions;

	while (*b)
	{
	prev_instructions = calculate_instructions(*b, prev_pos);
	max_instructions = calculate_instructions(*b, max_pos);
	max_pos = get_pos(*b, ft_lstsize(*b) - 1);
	prev_pos = get_pos(*b, ft_lstsize(*b) - 2);
		if (max_instructions > prev_instructions)
		{
			check_and_push(prev_pos, prev_instructions, b, a);
			index_all_items(*b);
			max_instructions = calculate_instructions(*b, get_pos(*b,
						ft_lstsize(*b) - 1));
			max_pos = get_pos(*b, ft_lstsize(*b) - 1);
			check_and_push(max_pos, max_instructions, b, a);
			sa(*a);
		}
		else
			check_and_push(max_pos, max_instructions, b, a);
	}
}
