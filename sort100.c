/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort100.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heddahbi <heddahbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 03:17:10 by heddahbi          #+#    #+#             */
/*   Updated: 2023/05/10 03:29:24 by heddahbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	init_chunk( t_data **new)
{	
	int	chunk_size;

	if (ft_lstsize(*new) <= 100)
		chunk_size = 5;
	else
		chunk_size = 9;
	return (chunk_size);
}

void	sort_infinitenumbers(t_data **new, t_data **b)
{
	int	chunk;
	int	i;
	int	j;
	int	chunk_size;

	chunk_size = init_chunk(new);
	chunk = ft_lstsize(*new) / chunk_size;
	i = chunk;
	j = 0;
	while (*new)
	{
		if ((*new)->index < i)
		{
			pb(new, b);
			j++;
			if (i - (chunk / 2) < (*b)->index)
				rb(b);
			if (j == i)
				i += chunk;
		}
		else
			ra(new);
	}
	push_to_a(new, b);
}

void	check_and_push(int pos, int instructions, t_data **b, t_data **new)
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
	pa(b, new);
}

void	push_to_a(t_data	**new, t_data	**b)
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
			check_and_push(prev_pos, prev_instructions, b, new);
			index_all_items(*b);
			max_instructions = calculate_instructions(*b, get_pos(*b,
						ft_lstsize(*b) - 1));
			max_pos = get_pos(*b, ft_lstsize(*b) - 1);
			check_and_push(max_pos, max_instructions, b, new);
			sa(*new);
		}
		else
			check_and_push(max_pos, max_instructions, b, new);
	}
}
