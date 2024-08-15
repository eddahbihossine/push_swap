/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_params.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heddahbi <heddahbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 02:19:37 by heddahbi          #+#    #+#             */
/*   Updated: 2023/05/10 02:19:38 by heddahbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_min3_list(t_data *lst)
{
	int	min;

	if (!lst)
		return (0);
	min = lst->content;
	while (lst)
	{
		if (lst->content < min && lst->index == -1)
			min = lst->content;
		lst = lst->next;
	}
	return (min);
}

int	get_min_pos(t_data *lst)
{
	int	min;
	int	pos;

	min = 0;
	pos = 0;
	if (!lst)
		return (0);
	min = get_min_list(lst);
	while (lst->content != min)
	{
		pos++;
		lst = lst->next;
	}
	return (pos);
}

int	get_pos(t_data *lst, int index)
{
	int	pos;
	int	current_index;

	pos = 0;
	if (!lst)
		return (0);
	while (lst)
	{
		current_index = lst->index;
		if (current_index != index)
		pos++;
		else
			break ;
			lst = lst->next;
	}
	return (pos);
}

int	get_max_list(t_data *lst)
{
	int	max;

	max = lst->content;
	if (!lst)
		return (0);
	while (lst)
	{
		if (lst->content > max
			&& lst->index == -1)
			max = lst->content;
		lst = lst->next;
	}
	return (max);
}

int	get_min_list(t_data *lst)
{
	int		min;
	t_data	*tmp;

	if (!lst)
		return (0);
	min = lst->content;
	lst = lst->next;
	tmp = lst;
	while (lst)
	{
		if (lst->content < min)
			min = lst->content;
		lst = lst->next;
	}
	return (min);
}
