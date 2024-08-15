/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements_bonus2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heddahbi <heddahbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 02:10:25 by heddahbi          #+#    #+#             */
/*   Updated: 2023/05/13 02:17:14 by heddahbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swapbonus.h"

void	sa(t_data *a)
{
	t_data	*swap;

	if (ft_lstsize (a) > 1)
	{
		swap = malloc(sizeof(t_data));
		swap->content = a->content;
		a->content = a->next->content;
		a->next->content = swap->content;
		free(swap);
	}
}

void	sb(t_data *b)
{
	t_data	*swap;

	if (ft_lstsize (b) > 1)
	{
		swap = malloc(sizeof(t_data));
		swap->content = b->content;
		b->content = b->next->content;
		b->next->content = swap->content;
		free(swap);
	}
}

void	rb(t_data **a)
{
	t_data	*last;

	if (*a != NULL && (*a)->next != NULL)
	{
		last = *a;
		*a = (*a)->next;
		last->next = NULL;
		ft_lstadd_back(a, last);
	}
}

void	ra(t_data **a)
{
	t_data	*last;

	if (*a != NULL && (*a)->next != NULL)
	{
		last = *a;
		*a = (*a)->next;
		last->next = NULL;
		ft_lstadd_back(a, last);
	}
}
