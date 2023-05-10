/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_allitems.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heddahbi <heddahbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 23:28:53 by heddahbi          #+#    #+#             */
/*   Updated: 2023/05/09 23:29:01 by heddahbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reset_all(t_data	*a)
{
	t_data	*tmp;

	tmp = a;
	while (tmp)
	{
		tmp->index = -1;
		tmp = tmp->next;
	}
}

void	index_all_items(t_data	*new)
{
	static int	i;
	t_data		*tmp;
	int			min;

	i = 0;
	reset_all(new);
	tmp = new;
	while (new)
	{
		min = get_min3_list (tmp);
		if (tmp->content == min && tmp->index == -1)
			tmp->index = i++;
		min = get_min3_list(new);
		if (new->content == min && new->index == -1)
		{
			new->index = i++;
			new = tmp;
		}
		new = new->next;
	}
}
