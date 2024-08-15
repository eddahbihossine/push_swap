/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heddahbi <heddahbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 03:28:46 by heddahbi          #+#    #+#             */
/*   Updated: 2023/05/13 02:13:14 by heddahbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_sort(t_data **a)
{
	t_data	*current;

	current = *a;
	while (current != NULL && current->next != NULL)
	{
		if (current->content > current->next->content)
		{
			return (0);
		}
			current = current->next;
	}
	return (1);
}
