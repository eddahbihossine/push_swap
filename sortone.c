/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortone.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heddahbi <heddahbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 03:18:05 by heddahbi          #+#    #+#             */
/*   Updated: 2023/05/10 03:18:09 by heddahbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_2numbers(t_data **new)
{
	if (!check_sort(new))
	{
		if ((*new)->content > (*new)->next->content)
			sa(*new);
	}
}
